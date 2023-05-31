#include "Square.h"

void Square::Print_info()
{
    cout << "�������� ������: " << name << endl;
    cout << (check() ? "����������" : "������������") << endl;
    cout << "���������� ������: " << sides_count << endl;
    cout << "�������: a = " << a_side << " b = " << b_side << " c = " << c_side << " d = " << d_side << endl;
    cout << "����: A = " << A_angle << " B = " << B_angle << " C = " << C_angle << " D = " << D_angle << endl << endl;
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