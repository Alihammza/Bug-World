/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   tdir.h
 * Author: oana
 *
 * Created on March 2, 2018, 6:03 PM
 */

#ifndef TDIR_H
#define TDIR_H
#include <iostream>
#include <cstdlib>

class tdir{
private:
    int direction;
public:
    tdir(int newdir)
    {
        if(newdir>5||newdir<0)
        {
            std::cerr<<"Direction should be in 0..5\n";
            exit(EXIT_FAILURE);
        }
        direction=newdir;
    }
};
#endif /* TDIR_H */

