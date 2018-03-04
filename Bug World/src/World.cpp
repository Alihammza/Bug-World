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