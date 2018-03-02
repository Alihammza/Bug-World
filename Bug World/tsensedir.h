/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   tsensedir.h
 * Author: oana
 *
 * Created on March 2, 2018, 6:34 PM
 */

#ifndef TSENSEDIR_H
#define TSENSEDIR_H
#include <iostream>
#include <cstdlib>

class tsensedir{
private:
    int sdir;
public:
    tsensedir(int ndi)
    {
        if(ndi<0||ndi>3)
        {
            std::cerr<<"Sense direction should be in 0..3\n";
            exit(EXIT_FAILURE);
        }
        sdir=ndi;
    }
};

#endif /* TSENSEDIR_H */

