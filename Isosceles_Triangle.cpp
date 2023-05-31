#include "Isosceles_Triangle .h"

Isosceles_Triangle::Isosceles_Triangle(int a_side, int b_side, int A_angle, int B_angle)
    : Triangle(a_side, b_side, sqrt(a_side* a_side + b_side * b_side), A_angle, B_angle)
{
    name = "Равнобедренный треугольник ";
    c_side = a_side;
    C_angle = 180 - A_angle - B_angle;
    a_side = c_side;
    A_angle = C_angle;
}
void Isosceles_Triangle::Print_info()
{
    cout << "Название фигуры: " << name << endl;
    cout << (check() ? "Правильная" : "Неправильная") << endl;
    cout << "Количество сторон: " << sides_count << endl;
    cout << "Стороны: a = " << a_side << " b = " << b_side << " c = " << c_side << endl;
    cout << "Углы: A = " << A_angle << " B = " << B_angle << " C = " << C_angle << endl << endl;
}

bool Isosceles_Triangle::check()
{
    if (!Triangle::check())
    {
        return false;
    }
    if (c_side != a_side && A_angle != C_angle)
    {
        return false;
    }
    return true;
}