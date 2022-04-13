/*
Задание 2 Создайте структуру, описывающую точку
в двумерной системе координат(x, y).С помощью этой
структуры задайте две точки.Напишите функцию, кото -
рая вычисляет расстояние между этими двумя точками ?
*/

#include <iostream>
#include <math.h>


using namespace std;


struct Point {
    int x = 0;
    int y = 0;
};

double calcDiatansePoint(Point* pointFirst, Point* pointSecond) {
    
    double dX = (pointFirst->x - pointSecond->x);
    double dY = (pointFirst->y - pointSecond->y);

    return  sqrt((dX * dX) + (dY * dY));
};

void inputPoint(Point* point) {
    cout << " x = ";
    cin >> point->x;
    cout << " y = ";
    cin >> point->y;
}

int main() {
    setlocale(LC_ALL, "RUS");
    Point pointFirst;
    Point pointSecond;

    cout << "Задайте координаты 1 точки:" << endl;
    inputPoint(&pointFirst);

    cout << "Задайте координаты 2 точки:" << endl;
    inputPoint(&pointSecond);

    cout << "Расстояниие между введенными точками:" << calcDiatansePoint(&pointFirst, &pointSecond) << endl;

    return 0;
}