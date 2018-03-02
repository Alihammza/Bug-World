/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   tposition.h
 * Author: oana
 *
 * Created on March 2, 2018, 6:53 PM
 */

#ifndef TPOSITION_H
#define TPOSITION_H

class tposition
{
private:
    int tpos_x;
    int tpos_y;
public:
    tposition(int pos_x,int pos_y)
    {
        tpos_x=pos_x;
        tpos_y=pos_y;
    }
    tposition operator=(tposition const &a)
    {
        tpos_x=a.tpos_x;
        tpos_y=a.tpos_y;
    }
};

#endif /* TPOSITION_H */

