#include <iostream>
#include<math.h>
using namespace std;

int main() {
    int n, original_n;
    cout << "Enter the value of n: ";
    cin >> n;

    original_n = n; // Store the original value of n

    int nd = 0;
    int sum = 0;

    // Count digits
    while (n > 0) {
        n /= 10;
        nd++;
    }

    // Calculate Armstrong sum
    n = original_n; // Reset n to the original value
    while (n > 0) {
        int x = n % 10;
        sum += pow(x, nd);
        n /= 10;
    }

    if (sum == original_n) {
        cout << "Armstrong number" << endl;
    } else {
        cout << "Not an Armstrong number" << endl;
    }

    return 0;
}