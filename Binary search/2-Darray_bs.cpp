#include <iostream>
using namespace std;

bool searchInRowWiseSortedMatrix(int arr[][4], int rows, int cols, int target) {
    for (int i = 0; i < rows; i++) {
        int low = 0, high = cols - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (arr[i][mid] == target) {
                cout << "Element found at (" << i << ", " << mid << ")" << endl;
                return true;
            } else if (arr[i][mid] < target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
    }
    cout << "Element not found" << endl;
    return false;
}

int main() {
    int arr[3][4] = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 50}
    };
    int target = 3;
    searchInRowWiseSortedMatrix(arr, 3, 4, target);
    return 0;
}
