#include "Equilateral_Triangle.h"


Equilateral_Triangle::Equilateral_Triangle(int a_side, int A_angle)
    : Triangle(a_side, a_side, a_side, A_angle, A_angle)
{
    name = "Равносторонний треугольник ";
}
/* { // Альтернативный вариант записи
    name = "Равносторонний треугольник ";
    sides_count = 3;
    c_side = this->a_side;
    b_side = this->a_side;
    B_angle = 60;
    C_angle = 60;
}*/
void Equilateral_Triangle::Print_info()
{
    cout << "Название фигуры: " << name << endl;
    cout << (check() ? "Правильная" : "Неправильная") << endl;
    cout << "Количество сторон: " << sides_count << endl;
    cout << "Стороны: a = " << a_side << " b = " << b_side << " c = " << c_side << endl;
    cout << "Углы: A = " << A_angle << " B = " << B_angle << " C = " << C_angle << endl << endl;
}

bool Equilateral_Triangle::check()
{
    if (!Triangle::check())
    {
        return false;
    }
    if (a_side != b_side != c_side && A_angle != 60 && B_angle != 60 && C_angle != 60)
    {
        return false;
    }
    return true;
}