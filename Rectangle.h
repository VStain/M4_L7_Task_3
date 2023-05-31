#pragma once

#include "Quadrangle.h"

class Rectangle : public Quadrangle
{
public:
    Rectangle(int a_side, int b_side, int A_angle);

    void Print_info() override;
    bool check() override;
};

class Square : public Quadrangle
{
public:
    Square(int a_side, int A_angle);
    void Print_info() override;
    bool check() override;
};