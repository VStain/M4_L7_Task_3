#include "Class_Figure.h"

    void Figure::Print_info()
    {
        cout << "Название фигуры: " << name << endl;
        cout << (check() ? "Правильная" : "Неправильная") << endl;
        cout << "Количество сторон: " << sides_count << endl;
    }

    bool Figure::check()
    {
        return sides_count > 0;
    }


      Quadrangle:: Quadrangle(int a_side, int b_side, int c_side, int d_side, int A_angle, int B_angle, int C_angle, int D_angle)
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

      Rectangle::Rectangle(int a_side, int b_side, int A_angle)
          : Quadrangle(a_side, b_side, c_side, d_side, A_angle, B_angle, C_angle, D_angle)
      {
          name = "Прямоугольник ";
          sides_count = 4;
          c_side = a_side;
          d_side = b_side;
          A_angle = 90;
          B_angle = 90;
          C_angle = 90;
          D_angle = 90;
      }
      void Rectangle::Print_info()
      {
          cout << "Название фигуры: " << name << endl;
          cout << (check() ? "Правильная" : "Неправильная") << endl;
          cout << "Количество сторон: " << sides_count << endl;
          cout << "Стороны: a = " << a_side << " b = " << b_side << " c = " << c_side << " d = " << d_side << endl;
          cout << "Углы: A = " << A_angle << " B = " << B_angle << " C = " << C_angle << " D = " << D_angle << endl << endl;
      }

      bool Rectangle::check()
      {
          if (!Quadrangle::check())
          {
              return false;
          }
          if (C_angle != 90)
          {
              return false;
          }
          return true;
      }

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

      void Print_info(Figure* figure)
      {
          figure->Print_info();
      }