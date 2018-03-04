/*
 * Helper class tsensedir equiped with validity checker and equality checkers
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
            throw "Sense direction should be in 0..3\n";
        }
        sdir=ndi;
    }
    tsensedir()
    {
        sdir=0;
    }
    bool operator==(tsensedir const& a)
    {
        if(sdir==a.sdir)
            return 1;
        return 0;
    }
    bool operator!=(tsensedir const& a)
    {
        if(sdir==a.sdir)
            return 0;
        return 1;
    }
};

#endif /* TSENSEDIR_H */

