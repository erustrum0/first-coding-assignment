//Program 1: calculate area of triangle
// area = (base*height)/2
#include <iostream>
using namespace std;

int main() {
    double base;
    cout << "Base: ";
    cin >> base;
    double height;
    cout << "Height: ";
    cin >> height;
    double area = (base*height)/2;
    cout << "Area: " << area << "\n";
}