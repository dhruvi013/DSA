#include <iostream>
using namespace std;

int mySqrt(int x) {
    if (x == 0 || x == 1)
        return x;

    double guess = x / 2.0;

    while (abs(guess * guess - x) > 0.01) {
        guess = (guess + x / guess) / 2.0;
    }

    return int(guess); 
}

int main() {
    int x;
    cout << "Enter a number: ";
    cin >> x;

    int sqrtValue = mySqrt(x);
    cout << "Square root (integer part) of " << x << " is: " << sqrtValue << endl;

    return 0;
}
