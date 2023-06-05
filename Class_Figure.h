#pragma once

#include <string>
#include <iostream>


using namespace std;

class Figure
{
public:

    virtual void Print_info();
    virtual bool check();

protected:
    int sides_count = 0;
    string name;
};

void Print_info(Figure* figure);
