//Program 2: get parity of int
//Boolean Formula: num%2 != 0

//embed libraries
#include <iostream>
using namespace std;

int main() {
    //number
    int num;
    cout << "Number: ";
    cin >> num;

    //get parity
    bool parity = num%2;

    //send output, terminate program
    if (parity) {
        cout << "Parity is odd.\n";
    }
    else {
        cout << "Parity is even.\n";
    }
    return 0;
}