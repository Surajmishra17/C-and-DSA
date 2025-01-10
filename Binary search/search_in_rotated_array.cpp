#include <iostream>
using namespace std;

int searchInRotatedArray(int arr[], int n, int target) {
    int low = 0;
    int high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            return mid;
        }

        // Determine which part is sorted
        if (arr[low] <= arr[mid]) { // Left part is sorted
            if (arr[low] <= target && target < arr[mid]) {
                high = mid - 1; // Target in the left part
            } else {
                low = mid + 1; // Target in the right part
            }
        } else { // Right part is sorted
            if (arr[mid] < target && target <= arr[high]) {
                low = mid + 1; // Target in the right part
            } else {
                high = mid - 1; // Target in the left part
            }
        }
    }
    return -1; // Target not found
}

int main() {
    int arr[] = {4, 5, 6, 0, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 2;
    int result = searchInRotatedArray(arr, n, target);
    if (result != -1) {
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found in array" << endl;
    }
    return 0;
}
