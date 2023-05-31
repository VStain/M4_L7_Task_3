#pragma once

#include "Quadrangle.h"

class Square : public Quadrangle
{
public:
    Square(int a_side, int A_angle);
    void Print_info() override;
    bool check() override;
};