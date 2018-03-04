/*
 * Class Cell
 */

#ifndef CELL_H
#define CELL_H
class Cell 
{
private:
    Bug occupant;
    bool obstructed;
    int food;
    Marker mark;
    bool home_black_bug;
    bool home_red_bug;
public:
    Cell(char symb);
    ~Cell();
    Bug get_occupant();
    void set_occupant(Bug new_occupant);
    int get_food();
    void set_food(int new_food);
    bool get_obstructed();
    bool is_black_home_area();
    bool is_red_home_area();
};


#endif /* CELL_H */

