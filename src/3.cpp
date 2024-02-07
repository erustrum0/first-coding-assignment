//Program 3: calculate mean of three numbers
//Formula: a+b+c/3

//embed libraries
#include <iostream>
using namespace std;

int main() {
    //get each number
    double a;
    double b;
    double c;
    cout << "Number 1: ";
    cin >> a;
    cout << "Number 2: ";
    cin >> b;
    cout << "Number 3: ";
    cin >> c;

    //calculate mean
    double mean = (a+b+c)/3;

    //final output, terminate program
    cout << "Mean of all numbers: " << mean << "\n";
    return 0;
}