#include <iostream>
using namespace std;

// Finding an efficient way to calculate the power of a number.
double Pow(double x, int y) {
    // The math rule: any number raised to 0 is 1.
    if (y == 0) {
        return 1;
    }

    // If y is negative, I'll switch things around: I'll use the reciprocal of x 
    // and make y positive. This makes the math work out.
    if (y < 0) {
        x = 1 / x;
        y = -y;
    }

    // Calculating the result for half of y first.
    double halfResult = Pow(x, y / 2);
    
    // If y is even, it's straightforward.
    if (y % 2 == 0) {
        return halfResult * halfResult;
    } 
    // But if it's odd, I have to factor in the base one more time.
    else {
        return x * halfResult * halfResult;
    }
}

int main() {
    double base;
    int exponent;

    cout << "Enter the base number: ";
    cin >> base;

    cout << "And now the exponent: ";
    cin >> exponent;

    cout << "The result is: " << Pow(base, exponent) << endl;

    return 0;
}