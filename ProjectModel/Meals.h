/**
 * Project Untitled
 */


#ifndef _MEALS_H
#define _MEALS_H

class Meals {
public: 
    int Id;
    String^ Name;
    String^ Description;
    double Price;
    int Stock;
    char Status;
    array<Byte> Photo;
};

#endif //_MEALS_H