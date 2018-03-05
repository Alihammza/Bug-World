/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   World.h
 * Author: ali
 *
 * Created on February 27, 2018, 1:49 AM
 */

#ifndef WORLD_H
#define WORLD_H
#include <string>
#include "headers.h"
#include "Cell.h"
using namespace std;

class World {
public:
    World();
    World(const World& orig);
    virtual ~World();
    
    void load(string filename);
    void execute_cycle();
    Cell get_cell(tposition pos);
    tposition adjacent(tdir dir, tposition pos);
    tcolor other_color(tcolor col);
    tcolor winner();
    int red_food();
    int black_food();
    int red_count();
    int black_count();
    void error(string message);
    void log(string format);
    
    void set_width(int w);
    void set_length(int len);
    
    int get_width();
    int get_length();
private:
    int width;
    int length;
    Cell **cell;
};

#endif /* WORLD_H */
