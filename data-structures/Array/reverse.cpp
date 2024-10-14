#include <iostream>
#include <vector>
using namespace std;


void reverseArray(vector<int> &arr) {
    int n = arr.size();

    vector<int> temp(n);

    for (int i = 0; i < n; i++) {
        temp[i] = arr[n - i - 1];
    }
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
}

void reverseArrayTwoPointer(vector<int> &arr) {
    int left = 0, right = arr.size() - 1;

    while (left < right) {
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
    }
}

void reverseArraySwap(vector<int>& arr) {
    int n = arr.size();

    for (int i = 0; i < n/2; i++) {
        swap(arr[i], arr[n - i - 1]);
    }
}

int main() {
    vector<int> arr = { 1, 4, 3, 2, 6, 5 };
    reverseArraySwap(arr);

    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    return 0;
}