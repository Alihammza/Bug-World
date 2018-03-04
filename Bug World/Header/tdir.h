/* 
 * Helper class tdir equiped with validity checker and equality operators.
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
            throw "Direction should be in 0..5\n";
        }
        direction=newdir;
    }
    tdir()
    {
        direction=0;
    }
    bool operator==(tdir const& a)
    {
        if(direction==a.direction)
            return 1;
        return 0;
    }
    bool operator!=(tdir const& a)
    {
        if(direction==a.direction)
            return 0;
        return 1;
    }
    
};
#endif /* TDIR_H */

