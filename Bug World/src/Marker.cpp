/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Marker.cpp
 * Author: ali
 * 
 * Created on February 27, 2018, 1:57 AM
 */

#include "Marker.h"

Marker::Marker() {
	this->bits=0;
}

Marker::Marker(const Marker& orig) {
}

Marker::~Marker() {
}

void Marker::set_bits(int bit){
    int bits= bit;
    }
    
int Marker::get_bits(){
    return bits;
}

void set_marker(tmark mark, tcolor col){
    this->bits = this->bits | 1<<(mark+6*col);
     
}
 
void clear_marker(tmark mark, tcolor col){
	this->bits = this->bits & ~1<<(mark+6*col);
     
}
 
bool check_marker(tmark mark, tcolor col){
    return this->bits & 1<<(mark+6*col);
	    
}
   
bool check_other_marker(tcolor col){
	for (int i = 0; i < 6; i++){
            if (this->bits & 1<<(i + 6*col)){
                return true;
            }
        }
    return false;
	
}

