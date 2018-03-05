/*
 * Helper class tmark equiped with validity checker and equality checkers
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
            throw "Mark should be in 0..5\n";
        }
        mark=nmark;
    }
    tmark()
    {
        mark=0;
    }
    bool operator==(tmark const& a)
    {
        if(mark==a.mark)
            return 1;
        return 0;
    }
    bool operator!=(tmark const& a)
    {
        if(mark==a.mark)
            return 0;
        return 1;
    }
    int get_mark()
    {
        return mark;
    }
};


#endif /* TMARK_H */

