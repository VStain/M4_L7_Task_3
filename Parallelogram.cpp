#include "Parallelogram.h"

Parallelogram::Parallelogram(int a_side, int b_side, int A_angle, int B_angle)
    : Quadrangle(a_side, b_side, c_side, d_side, A_angle, B_angle, C_angle, D_angle)
{
    name = "Параллелограмм ";
    sides_count = 4;
    c_side = a_side;
    d_side = b_side;
    C_angle = A_angle;
    D_angle = B_angle;
}
void Parallelogram::Print_info()
{
    cout << "Название фигуры: " << name << endl;
    cout << (check() ? "Правильная" : "Неправильная") << endl;
    cout << "Количество сторон: " << sides_count << endl;
    cout << "Стороны: a = " << a_side << " b = " << b_side << " c = " << c_side << " d = " << d_side << endl;
    cout << "Углы: A = " << A_angle << " B = " << B_angle << " C = " << C_angle << " D = " << D_angle << endl << endl;
}

bool Parallelogram::check()
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