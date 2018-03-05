/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Cell.h
 * Author: oana
 *
 * Created on March 2, 2018, 5:20 PM
 */

#ifndef CELL_H
#define CELL_H
#include "Bug.h"
#include "Marker.h"
class Cell 
{
private:
    Bug* occupant;
    bool obstructed;
    int food;
    bool home_black_bug;
    bool home_red_bug;
public:
    Marker* mark;
    Cell(char symb);
    ~Cell(){delete mark; delete occupant;};
    Bug* get_occupant();
    void set_occupant(Bug new_occupant);
    int get_food();
    void set_food(int new_food);
    bool get_obstructed();
    bool is_black_home_area();
    bool is_red_home_area();
};


#endif /* CELL_H */

