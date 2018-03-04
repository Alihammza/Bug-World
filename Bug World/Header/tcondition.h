/* 
 * Helper class tcondition equipped with equality checkers.
 */

#ifndef TCONDITION_H
#define TCONDITION_H

class tcondition{
private:
    int condition;
public:
    tcondition(int ncondition)
    {
        condition=ncondition;
    }
    tcondition()
    {
        condition=0;
    }
    bool operator==(tcondition const& a)
    {
        if(condition==a.condition)
            return 1;
        return 0;
    }
    bool operator!=(tcondition const& a)
    {
        if(condition==a.condition)
            return 0;
        return 1;
    }
};

#endif /* TCONDITION_H */

