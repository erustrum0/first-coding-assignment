//Program 1: calculate area of triangle
//Formula: area = (base*height)/2

//embed libraries
#include <iostream>
using namespace std;

int main() {
    //get base and height
    double base;
    cout << "Base: ";
    cin >> base;
    double height;
    cout << "Height: ";
    cin >> height;

    //calculate area
    double area = (base*height)/2;

    //final output, terminate program
    cout << "Area: " << area << "\n";
    return 0;
}