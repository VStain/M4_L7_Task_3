#include "Quadrangle.h"

Quadrangle::Quadrangle(int a_side, int b_side, int c_side, int d_side, int A_angle, int B_angle, int C_angle, int D_angle)
{
    name = "Четырехугольник ";
    sides_count = 4;
    this->a_side = a_side;
    this->b_side = b_side;
    this->c_side = c_side;
    this->d_side = d_side;
    this->A_angle = A_angle;
    this->B_angle = B_angle;
    this->C_angle = C_angle;
    this->D_angle = D_angle;
}

void Quadrangle::Print_info()
{
    cout << "Название фигуры: " << name << endl;
    cout << (check() ? "Правильная" : "Неправильная") << endl;
    cout << "Количество сторон: " << sides_count << endl;
    cout << "Стороны: a = " << a_side << " b = " << b_side << " c = " << c_side << " d = " << d_side << endl;
    cout << "Углы: A = " << A_angle << " B = " << B_angle << " C = " << C_angle << " D = " << D_angle << endl << endl;
}

bool Quadrangle::check()
{
    if (A_angle <= 0 || B_angle <= 0 || C_angle <= 0 || D_angle <= 0)
        return true;
    return Figure::check();
}