/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   tcolor.h
 * Author: oana
 *
 * Created on March 2, 2018, 5:35 PM
 */

#ifndef TCOLOR_H
#define TCOLOR_H
#include <iostream>
#include <cstdlib>

class tcolor{
    
private:
    int color;
public:
    tcolor(int n_color)
    {
        if(n_color!=0&&n_color!=1)
        {
            std::cerr<<"Color can only take value 0 or 1\n";
            exit(EXIT_FAILURE);
        }
        color=n_color;
    }
};

#endif /* TCOLOR_H */

