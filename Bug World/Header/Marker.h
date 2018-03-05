/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Marker.h
 * Author: ali
 *
 * Created on February 27, 2018, 1:57 AM
 */

#ifndef MARKER_H
#define MARKER_H
#include "headers.h"

class Marker {
private:
    int bits;
public:
    Marker(const Marker& orig);
    virtual ~Marker();
    Marker();
    void set_marker(tmark mark, tcolor col);
    void clear_marker(tmark mark, tcolor col);
    bool check_marker(tmark mark, tcolor col);
    bool check_other_marker(tcolor col);
    
    void set_bits(int bit);
    
    int get_bits();
    
};

#endif /* MARKER_H */
