/*
 * Helper class tposition equiped with validity checker and equality checkers
 */


#ifndef TPOSITION_H
#define TPOSITION_H

class tposition
{
public:
    int tpos_x;
    int tpos_y;
    tposition(int pos_x,int pos_y)
    {
        tpos_x=pos_x;
        tpos_y=pos_y;
    }
    tposition()
    {
        tpos_x=0;
        tpos_y=0;
    }
    tposition operator=(tposition const &a)
    {
        tpos_x=a.tpos_x;
        tpos_y=a.tpos_y;
    }
    bool operator==(tposition const &a)
    {
        if(tpos_x==a.tpos_x&&tpos_y==a.tpos_y)
            return 1;
        return 0;
    }
    bool operator!=(tposition const &a)
    {
        if(tpos_x==a.tpos_x&&tpos_y==a.tpos_y)
            return 0;
        return 1;
    }
};

#endif /* TPOSITION_H */

