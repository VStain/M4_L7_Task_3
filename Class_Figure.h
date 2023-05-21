#pragma once

#include <string>
#include <iostream>

using namespace std;

class Figure
{
public:

    virtual void Print_info();
    virtual bool check();

protected:
    int sides_count = 0;
    string name;

};
class Triangle :public Figure
{
public:
    Triangle(int a_side, int b_side, int c_side, int A_angle, int B_angle);

    void Print_info() override;
    bool check() override;

protected:
    int a_side = 0;
    int b_side = 0;
    int c_side = 0;
    int A_angle = 0;
    int B_angle = 0;
    int C_angle = 0;
};

class Quadrangle :public Figure
{
public:
    Quadrangle(int a_side, int b_side, int c_side, int d_side, int A_angle, int B_angle, int C_angle, int D_angle);

    void Print_info() override;
    bool check() override;

protected:
    int a_side = 0;
    int b_side = 0;
    int c_side = 0;
    int d_side = 0;
    int A_angle = 0;
    int B_angle = 0;
    int C_angle = 0;
    int D_angle = 0;
};

class Right_Triangle : public Triangle
{
public:
    Right_Triangle(int a_side, int b_side, int A_angle, int B_angle);

    void Print_info() override;
    bool check() override;
};

class Isosceles_Triangle : public Triangle
{
public:
    Isosceles_Triangle(int a_side, int b_side, int A_angle, int B_angle);

    void Print_info() override;
    bool check() override;
};

class Equilateral_Triangle : public Triangle
{
public:
    Equilateral_Triangle(int a_side, int A_angle);

    void Print_info() override;
    bool check() override;
};

class Rectangle : public Quadrangle
{
public:
    Rectangle(int a_side, int b_side, int A_angle);

    void Print_info() override;
    bool check() override;
};

class Square : public Quadrangle
{
public:
    Square(int a_side, int A_angle);
    void Print_info() override;
    bool check() override;
};

class Parallelogram : public Quadrangle
{
public:
    Parallelogram(int a_side, int b_side, int A_angle, int B_angle);
    void Print_info() override;
    bool check() override;
};

class Rhomb : public Quadrangle
{
public:
    Rhomb(int a_side, int A_angle, int B_angle);
    void Print_info() override;
    bool check() override;
};

void Print_info(Figure* figure);
