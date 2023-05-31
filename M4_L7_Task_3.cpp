#include <cmath>
#include "Class_Figure.h"
#include "Class_Triangle.h"
#include "Class_RightTriangle.h"
#include "Isosceles_Triangle .h"
#include "Equilateral_Triangle.h"
#include "Quadrangle.h"
#include "Rectangle.h"
#include "Square.h"
#include "Parallelogram.h"
#include "Rhomb.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");


    Figure figure;
    Triangle triangle(10, 20, 30, 80, 60);
    Print_info(&triangle);

    Right_Triangle right_triangle(10, 20, 30, 50);
    Print_info(&right_triangle);

    Isosceles_Triangle isosceles_triangle(10, 20, 50, 60);
    Print_info(&isosceles_triangle);

    Equilateral_Triangle Equilateral_Triangle(30, 60);
    Print_info(&Equilateral_Triangle);

    Quadrangle Quadrangle(10, 20, 30, 40, 50, 60, 70, 180);
    Print_info(&Quadrangle);

    Rectangle Rectangle(10, 20, 90);
    Print_info(&Rectangle);

    Square Square(20, 90);
    Print_info(&Square);

    Parallelogram Parallelogram(20, 30, 30, 40);
    Print_info(&Parallelogram);

    Rhomb Rhomb(30, 30, 40);
    Print_info(&Rhomb);

    return 0;
}