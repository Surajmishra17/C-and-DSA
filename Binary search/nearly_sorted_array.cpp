#include <iostream>
using namespace std;

int binarySearchInNearlySortedArray(int arr[], int n, int target) {
    int low = 0;
    int high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        // Check mid, mid-1, and mid+1
        if (mid < n && arr[mid] == target) {
            return mid;
        }
        if (mid > low && arr[mid - 1] == target) {
            return mid - 1;
        }
        if (mid < high && arr[mid + 1] == target) {
            return mid + 1;
        }

        // If target is smaller, search left half
        if (arr[mid] > target) {
            high = mid - 2;
        } else {
            // If target is larger, search right half
            low = mid + 2;
        }
    }

    return -1; // Target not found
}

int main() {
    int arr[] = {10, 3, 40, 20, 50, 80, 70};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 3;
    int result = binarySearchInNearlySortedArray(arr, n, target);
    if (result != -1) {
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found in array" << endl;
    }
    return 0;
}
