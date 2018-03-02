/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   tmark.h
 * Author: oana
 *
 * Created on March 2, 2018, 6:41 PM
 */

#ifndef TMARK_H
#define TMARK_H
#include <iostream>
#include <cstdlib>

class tmark{
private:
    int mark;
public:
    tmark(int nmark)
    {
        if(nmark<0||nmark>5)
        {
            std::cerr<<"Mark should be in 0..5\n";
            exit(EXIT_FAILURE);
        }
        mark=nmark;
    }
};


#endif /* TMARK_H */

