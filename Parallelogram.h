#pragma once

#include "Quadrangle.h"

class Parallelogram : public Quadrangle
{
public:
    Parallelogram(int a_side, int b_side, int A_angle, int B_angle);
    void Print_info() override;
    bool check() override;
};