#include <iostream>
#define PI 3.14159265
#include <cmath>
using namespace std;
int main() {
    double x1,y1;// A
    double x2,y2;// B
    double x3,y3;// C
    double a, b ,c;// AB BC CA

    cout << "Enter 'A' point coordinates (format: x y): ";
    cin >> x1 >> y1;
    cout << endl;
    cout << "Enter 'B' point coordinates (format: x y): ";
    cin >> x2 >> y2;
    cout << endl;
    cout << "Enter 'C' point coordinates (format: x y): ";
    cin >> x3 >> y3;
    cout << endl;

    a = sqrt(pow((x2-x1),2) + pow((y2-y1),2));
    b = sqrt(pow((x3-x2),2) + pow((y3-y2),2));
    c = sqrt(pow((x3-x1),2) + pow((y3-y1),2));

    double A, B, C; // cosA cosB cosC

    A = (pow(a,2) + pow(c,2) - pow(b,2)) / 2. / a / c;
    B = (pow(a,2) + pow(b,2) - pow(c,2)) / 2. / a / b;
    C = (pow(c,2) + pow(b,2) - pow(a,2)) / 2. / c / b;

    std::cout << "The angle A = " << (acos (A) * 180.0 / PI)
              << " degrees. " << std::endl;
    std::cout << "The angle B = " << (acos (B) * 180.0 / PI)
              << " degrees. " << std::endl;
    std::cout << "The angle C = " << (acos (C) * 180.0 / PI)
              << " degrees. " << std::endl;
    return 0;
}