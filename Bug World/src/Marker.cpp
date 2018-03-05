/*
 * Marker class implementation
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
    bits= bit;
}
    
int Marker::get_bits(){
    return bits;
}

void Marker::set_marker(tmark mark, tcolor col){
    this->bits = this->bits | 1<<(mark+6*col);
     
}
 
void Marker::clear_marker(tmark mark, tcolor col){
	this->bits = this->bits & ~1<<(mark+6*col);
     
}
 
bool Marker::check_marker(tmark mark, tcolor col){
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
