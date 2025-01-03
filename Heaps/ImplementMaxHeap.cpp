#include <iostream>
#include <vector>
using namespace std;

class MaxHeap {
public:
    vector<int> arr;
    int idx;
    MaxHeap(int x) { // x is capacity 
        idx = 1;
        vector<int> a(x);
        arr = a;
    }
    int top() {
        return arr[1];
    }
    void push(int x) {
        arr[idx] = x;
        int i = idx;
        idx++;
        // swapping til i == 1
        while (i != 1) {
            int parent = i / 2;
            if (arr[i] > arr[parent]) swap(arr[i], arr[parent]);
            else break;
            i = parent;
        }
    }
    void pop() {
        idx--;
        int i = 1;
        arr[i] = arr[idx];
        // rearrangement
        while (true) {
            int left = 2 * i, right = 2 * i + 1;
            if (left > idx - 1) break;
            if (right > idx - 1) {
                if (arr[i] < arr[left]) {
                    swap(arr[i], arr[left]);
                    i = left;
                    break;
                }
            }
            if (arr[left] > arr[right]) {
                if (arr[i] < arr[left]) {
                    swap(arr[i], arr[left]);
                    i = left;
                }
                else break;
            }
            else {
                if (arr[i] < arr[right]) {
                    swap(arr[i], arr[right]);
                    i = right;
                }
                else break;
            }
        }
    }
    int size() {
        return idx - 1;
    }
    void display() {
        for (int i = 1; i < idx; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    MaxHeap pq(25); // 25 is max capacity
    pq.push(10);
    pq.push(20);
    cout << pq.top() << " " << pq.size() << endl;
    pq.push(11);
    pq.push(2);
    cout << pq.top() << " " << pq.size() << endl;
    pq.display();
    pq.pop();
    cout << pq.top() << " " << pq.size() << endl;
    pq.display();
}
