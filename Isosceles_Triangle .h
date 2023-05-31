#pragma once

#include "Class_Triangle.h"

class Isosceles_Triangle : public Triangle
{
public:
    Isosceles_Triangle(int a_side, int b_side, int A_angle, int B_angle);

    void Print_info() override;
    bool check() override;
};
