#include "Bug.h"

Bug::Bug(tcolor i_color, int i_progid, int i_resting)
{
    color=i_color;
    prog_id=i_progid;
    resting=i_resting;
}

void Bug::start_resting(){
    resting=1;
    remaining_rest=14;
}

bool Bug::rested(){
    remaining_rest--;
    return resting;
}

int Bug::get_progid()
{
    return prog_id;
}

tcolor Bug::get_color(){
    return color;
}

tstate Bug::get_state(){
    return state;
}

void Bug::set_state(tstate new_state)
{
    state=new_state;
}

tdir Bug::get_direction(){
    return direction;
}
    
void Bug::set_direction(tdir new_direction)
{
    direction=new_direction;
}

tposition Bug::get_position()
{
    return pos;
}

void Bug::set_position(tposition new_position)
{
    pos=new_position;
}

bool Bug::get_food(){
    return has_food;
}
    
void Bug::set_food(bool new_food)
{
    has_food=new_food;
}
   
bool Bug::is_dead()
{
    return (dead==1);
}

void Bug::kill()
{
    dead=1;
}