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

class Marker {
private:
    int bits;
public:
    Marker(const Marker& orig);
    virtual ~Marker();
    Marker::Marker();
    void set_marker(int mark, int col);
    void clear_marker(int mark, int col);
    bool check_marker(int mark, int col);
    bool check_other_marker(int col);
    
    void set_bits(int bit);
    
    int get_bits();
    
};

#endif /* MARKER_H */

