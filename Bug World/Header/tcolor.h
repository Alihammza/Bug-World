/*
 * Helper class tcolor equipped with validity checker and equality operators
 */

#ifndef TCOLOR_H
#define TCOLOR_H
#include <iostream>
#include <cstdlib>

//0 for black, 1 for red
class tcolor{
    
private:
    int color;
public:
    tcolor(int n_color)
    {
        if(n_color!=0&&n_color!=1)
        {
            throw "Color can only take value 0 or 1\n";
        }
        color=n_color;
    }
    tcolor()
    {
        color=0;
    }
    bool operator==(tcolor const& a)
    {
        if(color==a.color)
            return 1;
        return 0;
    }
    bool operator!=(tcolor const& a)
    {
        if(color==a.color)
            return 0;
        return 1;
    }
};

#endif /* TCOLOR_H */

