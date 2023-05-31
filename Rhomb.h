#pragma once

#include "Quadrangle.h"

class Rhomb : public Quadrangle
{
public:
    Rhomb(int a_side, int A_angle, int B_angle);
    void Print_info() override;
    bool check() override;
};