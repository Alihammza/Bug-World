/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   World.cpp
 * Author: ali
 * 
 * Created on February 27, 2018, 1:49 AM
 */

#include "World.h"



World::World() {
}

World::World(const World& orig) {
}

World::~World() {
	for (int i = 0; i < this->Length; i++)
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

int World::get_width(){
    return length;
}



void World::load(string filename){ 
	
	//yet to figure out how to implement this
	
	
}


Cell World::get_cell(tposition pos){
        int i = pos.first, j = pos.second;
        
        if ((i < 0 || j < 0) || (i >= this->width || j >= this->length)){
            this->error("Invalid position!");
        }
        
        return this->cell[i][j];
    }

tposition World::adjacent(tdir dir, tposition pos){
    
    int i = pos.first, j = pos.second;
    tposition tmp;

    if ((i < 0 || j < 0) || (i >= this->width || j >= this->length)){
        this->error("Invalid position!");
    }

    if (dir > 5 || dir < 0){
        this->error("Invalid direction!");
    }
    if (dir == 0){
        tmp.first = i + 1;
        tmp.second = j;
        return tmp;
    }

    if (dir == 1){
        if (j%2 == 0){
            tmp.first = i;
            tmp.second = j + 1;
            return tmp;
        }
        else {
            tmp.first = i+1;
            tmp.second = j+1;
            return tmp;
        }
    }
    else if (dir == 2){
        if (j%2 == 0){
            tmp.first = i - 1;
            tmp.second = j + 1;
            return tmp;
        }
        else {
            tmp.first = i;
            tmp.second = j + 1;
            return tmp;
        }
    }
    else if (dir == 3){
        tmp.first = i - 1;
        tmp.second = j;
        return tmp;
    }
    else if (dir == 4){
        if (j%2 == 0){
            tmp.first = i - 1;
            tmp.second = j - 1;
            return tmp;
        }
        else {
            tmp.first = i;
            tmp.second = j - 1;
            return tmp;
        }
    }
    else{
        if (j%2 == 0){
            tmp.first = i;
            tmp.second = j - 1;
            return tmp;
        }
        else {
            tmp.first = i +1;
            tmp.first = j -1;
            return tmp;
        }
    }
 }

tcolor World::other_color(int col){
	return 1 - col;
}
int World::red_food() {
    int count = 0;
    for (int i = 0; i < this->width; i++){
        for(int j = 0; j < this->length; j++){
            if (this->cell[i][j].is_red_home_area()){
                count += this->board[i][j].get_food();
            }
        }        
    }
    return count;
}

int World::black_food() {
    int count = 0;
    for (int i = 0; i < this->width; i++){
        for(int j = 0; j < this->length; j++){
            if (this->board[i][j].is_black_home_area()){
                count += this->board[i][j].get_food();
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
            
            if (bug == nullptr || bug->get_color() == 1){
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
            Bug* bug = this->cell[j][i].get_occupant();
            
            if (bug == nullptr || bug->get_color() == 0){
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


