/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <iostream>
#include "Bug.h"

using namespace std;
int main()
{
    /*invalid color*/
    try{
        Bug b(2,1,14);
    }
    catch(char const* e)
    {
        cout<<e<<endl;
    }
    
    /*invalid resting time*/
    try
    {
        Bug b(1,1,-3);
    }
    catch(char const *e)
    {
        cout<<e<<endl;
    }
    
    Bug b(1,1,14);
    
    /*invalid direction*/
    try
    {
        b.set_direction(6);
    }
    catch(char const *e)
    {
        cout<<e<<endl;
    }
    
    /*invalid state*/
    try
    {
        b.set_state(-1);
    }
    catch(char const* e)
    {
        cout<<e<<endl;
    }
    
    /*invalid food*/
    try
    {
        b.set_food(-15);
    }
     catch(char const* e)
    {
        cout<<e<<endl;
    }
    
    /*correct resting procedure*/
    b.start_resting();
    for(int i=0;i<=14;i++)
        cout<<"Is rested at time "<<i+1<<": "<<b.rested()<<endl;        
    cout<<"Still rested "<<b.rested()<<endl;
    
    /*Correct color and id getters*/
    tcolor a=1;
    if(b.get_color()!=a)
        cout<<"The color getter doesn't work correctly.\n";
    
    if(b.get_progid()!=1)
        cout<<"The id getter doesn't work correctly.\n";
    
    /*getter setter check*/
    b.set_direction(4);
    if(b.get_direction()!=4)
        cout<<"The direction setter doesn't work right\n";
    
    b.set_food(1);
    if(b.get_food()!=1)
        cout<<"The food setter doesn't work right\n";
    
    tposition t(1,2);
    b.set_position(t);
    if(b.get_position()!=t)
        cout<<"The position setter doesn't work right\n";
    
    b.set_state(2);
    if(b.get_state()!=tstate(2))
        cout<<"The state setter doesn't work right\n";

    /*correct killing procedure*/
    if(b.is_dead())
        cout<<"The killing function doesn't work well\n";
    b.kill();
    if(!b.is_dead())
        cout<<"The bug should be dead \n";
    try
    {
        b.kill();
    }
    catch(char const* e)
    {
        cout<<e<<endl;
    }
    return 0;
}
