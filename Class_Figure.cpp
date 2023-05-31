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

      void Print_info(Figure* figure)
      {
          figure->Print_info();
      }