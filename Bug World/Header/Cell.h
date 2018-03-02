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
class Cell 
{
private:
    Bug occupant;
    bool obstructed;
    int food;
    Marker mark;
    bool home_black_bug;
    bool home_red_bug;
public:
    Cell(char symb);
    ~Cell();
    Bug get_occupant();
    void set_occupant(Bug new_occupant);
    int get_food();
    void set_food(int new_food);
    bool get_obstructed();
    bool is_black_home_area();
    bool is_red_home_area();
};


#endif /* CELL_H */

