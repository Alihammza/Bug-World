/*
 * Helper class tstate equiped with validity checker and comparison operators
 */

#ifndef TSTATE_H
#define TSTATE_H
#include <iostream>
#include <cstdlib>

class tstate{
private:
    int state;
public:
    tstate(int nstate)
    {
        if(nstate<0||nstate>9999)
        {
            throw "State should be in 0..9999\n";
        }
        state=nstate;
    }
    tstate()
    {
        state=0;
    }
    bool operator==(tstate const& a)
    {
        if(state==a.state)
            return 1;
        return 0;
    }
    bool operator!=(tstate const& a)
    {
        if(state==a.state)
            return 0;
        return 1;
    }   
};


#endif /* TSTATE_H */

