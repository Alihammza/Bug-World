/*
 * Helper class tmark equiped with validity checker and equality checkers
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
            throw "Tleftright can only take value 0 or 1\n";
        }
        tlr=ntlr;
    }
    tleftright()
    {
        tlr=0;
    }
    bool operator==(tleftright const& a)
    {
        if(tlr==a.tlr)
            return 1;
        return 0;
    }
    bool operator!=(tleftright const& a)
    {
        if(tlr==a.tlr)
            return 0;
        return 1;
    }
};

#endif /* TLEFTRIGHT_H */

