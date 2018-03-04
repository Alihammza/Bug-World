

#include "Bug.h"
/*
 * # - obstacle
 * . - clear cell
 * _ black bug home area cell
 * + red bug home area cell
 * 1...9 clear cell containing n food particles
 * 
 * as many bugs as many home area cells
 */
Cell::Cell(char symb)
{
    switch(symb){
        case '#' :
                occupant=null;
                
    }
    
}

Cell::~Cell(){}
    
Bug Cell::get_occupant()
{
    return occupant;
}
    
void Cell::set_occupant(Bug new_occupant)
{
    ocupant=new_ocupant;
}
    
int Cell::get_food()
{
    return food;
}
    
void Cell::set_food(int new_food)
{
    food=new_food;
}
    
bool Cell::get_obstructed()
{
    return obstructed;
}
    
bool Cell::is_black_home_area()
{
    return home_black_bug;
}
    
bool Cell::is_red_home_area()
{
    return home_red_bug;
}
