#include "Rhomb.h"

Rhomb::Rhomb(int a_side, int A_angle, int B_angle)
    : Quadrangle(a_side, b_side, c_side, d_side, A_angle, B_angle, C_angle, D_angle)
{
    name = "Ромб ";
    sides_count = 4;
    b_side = c_side = d_side = a_side;
    C_angle = A_angle;
    D_angle = B_angle;
}
void  Rhomb::Print_info()
{
    cout << "Название фигуры: " << name << endl;
    cout << (check() ? "Правильная" : "Неправильная") << endl;
    cout << "Количество сторон: " << sides_count << endl;
    cout << "Стороны: a = " << a_side << " b = " << b_side << " c = " << c_side << " d = " << d_side << endl;
    cout << "Углы: A = " << A_angle << " B = " << B_angle << " C = " << C_angle << " D = " << D_angle << endl << endl;
};

bool  Rhomb::check()
{
    if (!Quadrangle::check())
    {
        return false;
    }
    if (a_side != b_side && c_side != d_side && A_angle != B_angle && C_angle != D_angle)
    {
        return false;
    }
    return true;
}