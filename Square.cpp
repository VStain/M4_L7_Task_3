#include "Square.h"

Square::Square(int a_side, int A_angle)
    : Quadrangle(a_side, b_side, c_side, d_side, A_angle, B_angle, C_angle, D_angle)
{
    name = "Квадрат ";
    sides_count = 4;
    b_side = c_side = d_side = a_side;
    A_angle = 90;
    B_angle = 90;
    C_angle = 90;
    D_angle = 90;
}
void Square::Print_info()
{
    cout << "Название фигуры: " << name << endl;
    cout << (check() ? "Правильная" : "Неправильная") << endl;
    cout << "Количество сторон: " << sides_count << endl;
    cout << "Стороны: a = " << a_side << " b = " << b_side << " c = " << c_side << " d = " << d_side << endl;
    cout << "Углы: A = " << A_angle << " B = " << B_angle << " C = " << C_angle << " D = " << D_angle << endl << endl;
}

bool Square::check()
{
    if (!Quadrangle::check())
    {
        return false;
    }
    if (a_side != b_side != c_side != d_side && A_angle != 90 && B_angle != 90 && C_angle != 90 && D_angle != 90)
    {
        return false;
    }
    return true;
}

