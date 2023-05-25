#include "Class_Triangle.h"

Triangle::Triangle(int a_side, int b_side, int c_side, int A_angle, int B_angle)
{
    name = "Треугольник ";
    sides_count = 3;
    this->a_side = a_side;
    this->b_side = b_side;
    this->c_side = c_side;
    this->A_angle = A_angle;
    this->B_angle = B_angle;
    C_angle = 180 - A_angle - B_angle;
}

void Triangle::Print_info()
{
    cout << "Название фигуры: " << name << endl;
    cout << (check() ? "Правильная" : "Неправильная") << endl;
    cout << "Количество сторон: " << sides_count << endl;
    cout << "Стороны: a = " << a_side << " b = " << b_side << " c = " << c_side << endl;
    cout << "Углы: A = " << A_angle << " B = " << B_angle << " C = " << C_angle << endl << endl;
}

bool Triangle::check()
{
    if (A_angle + B_angle + C_angle == 180)
        return true;
    return Figure::check();
}