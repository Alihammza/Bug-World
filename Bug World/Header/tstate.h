/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   tstate.h
 * Author: oana
 *
 * Created on March 2, 2018, 6:49 PM
 */

#ifndef TSTATE_H
#define TSTATE_H
#include <iostream>
#include <cstdlib>

class tstate{
private:
    int state;
public:
    tmark(int nstate)
    {
        if(nstate<0||nstate>9999)
        {
            std::cerr<<"State should be in 0..9999\n";
            exit(EXIT_FAILURE);
        }
        state=nstate;
    }
};


#endif /* TSTATE_H */

