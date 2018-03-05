#include "World.h"
#include "Bug.h"



World::World() {
}

World::World(const World& orig) {
}

World::~World() {
	for (int i = 0; i < this->length; i++)
                delete[] cell[i];
        delete[] cell;
	
}

void World::set_width(int w){
    width=w;
}

void World::set_length(int len){
    length=len;
}

int World::get_width(){
    return width;
}

int World::get_length(){
    return length;
}



void World::load(string filename){ 
	
	//yet to figure out how to implement this
	
	
}


Cell World::get_cell(tposition pos){
        int i = pos.tpos_x, j = pos.tpos_y;
        
        if ((i < 0 || j < 0) || (i >= this->width || j >= this->length)){
            throw "Invalid position!";
        }
        
        return this->cell[i][j];
    }

tposition World::adjacent(tdir dir, tposition pos){
    
    int i = pos.tpos_x, j = pos.tpos_y;
    tposition tmp;

    if ((i < 0 || j < 0) || (i >= this->width || j >= this->length)){
        throw "Invalid position!";
    }

    if (dir == 0){
        tmp.tpos_x = i + 1;
        tmp.tpos_y = j;
        return tmp;
    }

    if (dir == 1){
        if (j%2 == 0){
            tmp.tpos_x = i;
            tmp.tpos_y = j + 1;
            return tmp;
        }
        else {
            tmp.tpos_x = i+1;
            tmp.tpos_y = j+1;
            return tmp;
        }
    }
    else if (dir == 2){
        if (j%2 == 0){
            tmp.tpos_x = i - 1;
            tmp.tpos_y = j + 1;
            return tmp;
        }
        else {
            tmp.tpos_x = i;
            tmp.tpos_y = j + 1;
            return tmp;
        }
    }
    else if (dir == 3){
        tmp.tpos_x = i - 1;
        tmp.tpos_y = j;
        return tmp;
    }
    else if (dir == 4){
        if (j%2 == 0){
            tmp.tpos_x = i - 1;
            tmp.tpos_y = j - 1;
            return tmp;
        }
        else {
            tmp.tpos_x = i;
            tmp.tpos_y = j - 1;
            return tmp;
        }
    }
    else{
        if (j%2 == 0){
            tmp.tpos_x = i;
            tmp.tpos_y = j - 1;
            return tmp;
        }
        else {
            tmp.tpos_x = i +1;
            tmp.tpos_x = j -1;
            return tmp;
        }
    }
 }

tcolor World::other_color(tcolor col){
	return tcolor(1 - col.get_color());
}
int World::red_food() {
    int count = 0;
    for (int i = 0; i < this->width; i++){
        for(int j = 0; j < this->length; j++){
            if (this->cell[i][j].is_red_home_area()){
                count += this->cell[i][j].get_food();
            }
        }        
    }
    return count;
}

int World::black_food() {
    int count = 0;
    for (int i = 0; i < this->width; i++){
        for(int j = 0; j < this->length; j++){
            if (this->cell[i][j].is_black_home_area()){
                count += this->cell[i][j].get_food();
            }
        }        
    }
    return count;
}

int World::black_count() {
    int count = 0;
    for (int i = 0; i < this->width; i++){
        for(int j = 0; j < this->length; j++){
            Bug* bug= this->cell[j][i].get_occupant();
            
            if (bug == NULL || bug->get_color() == 1){
                continue;
            }
            count++;
             
        }
    }
    return count;
}

int World::red_count() {
    int count = 0;
    for (int i = 0; i < this->width; i++){
        for(int j = 0; j < this->length; j++){
            Bug* bug = new Bug(*this->cell[j][i].get_occupant());
            
            if (bug == NULL || bug->get_color() == 0){
                continue;
            }
            count++;
        }        
    }
    return count;
}

void error(std::string message) {
        throw message;
    }
    
tcolor World::winner() {
        if (this->red_food() > this->black_food()){
            return 1;
        }
        else if (this->black_food() > this->red_food()){
            return 0;
        }
        else {
            return -1;
        } 
}
