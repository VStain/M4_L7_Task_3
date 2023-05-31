#pragma once

#include "Class_Figure.h"
#include "Quadrangle.h"

class Quadrangle :public Figure
{
public:
    Quadrangle(int a_side, int b_side, int c_side, int d_side, int A_angle, int B_angle, int C_angle, int D_angle);

    void Print_info() override;
    bool check() override;

protected:
    int a_side = 0;
    int b_side = 0;
    int c_side = 0;
    int d_side = 0;
    int A_angle = 0;
    int B_angle = 0;
    int C_angle = 0;
    int D_angle = 0;
};