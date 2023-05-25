#pragma once

#include <string>
#include <iostream>
#include "Class_Figure.h"


class Triangle :public Figure
{
public:
    Triangle(int a_side, int b_side, int c_side, int A_angle, int B_angle);

    void Print_info() override;
    bool check() override;

protected:
    int a_side = 0;
    int b_side = 0;
    int c_side = 0;
    int A_angle = 0;
    int B_angle = 0;
    int C_angle = 0;
};