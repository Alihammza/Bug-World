/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   tleftright.h
 * Author: oana
 *
 * Created on March 2, 2018, 6:38 PM
 */

#ifndef TLEFTRIGHT_H
#define TLEFTRIGHT_H
#include <iostream>
#include <cstdlib>
class tleftright{
private:
    int tlr;
public:
    tleftright(int ntlr)
    {
        if(ntlr!=0&&ntlr!=1)
        {
            std::cerr<<"Tleftright can only take value 0 or 1\n";
            exit(EXIT_FAILURE);
        }
        tlr=ntlr;
    }
};

#endif /* TLEFTRIGHT_H */

