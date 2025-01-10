#include<bits/stdc++.h>
using namespace std;

double squareRoot(int num, double precision = 0.00001) {
    int lo = 0;
    int hi = num;
    double mid;

    while (lo <= hi) {
        mid = lo + (hi - lo) / 2;
        if (mid * mid == num) {
            return mid;
        } else if (mid * mid < num) {
            lo = mid + 1;
        } else {
            hi = mid - 1;
        }
    }

    // Refine result for decimal precision
    double increment = 0.1;
    for (int i = 0; i < 5; ++i) { // Adjust for desired decimal places
        while (mid * mid <= num) {
            mid += increment;
        }
        mid -= increment;
        increment /= 10;
    }

    return mid;
}

int main() {
    int num;
    cout << "Enter the number: ";
    cin >> num;
    cout << "Square root of " << num << " is " << squareRoot(num) << endl;
    return 0;
}
