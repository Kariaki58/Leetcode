#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;


void reserveArrayInBuiltAlgorithm(vector<int> &arr) {
    reverse(arr.begin(), arr.end());
}

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

void reverseArrayRec(vector<int>& arr, int l, int r) {  
    if (l >= r)
        return;
    swap(arr[l], arr[r]);
    reverseArrayRec(arr, l + 1, r - 1);
}

void reverseArrayRecursive(vector<int> &arr) {
    int n = arr.size();
    reverseArrayRec(arr, 0, n - 1);
}

int main() {
    vector<int> arr = { 1, 4, 3, 2, 6, 5 };
    reverseArrayRecursive(arr);

    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    return 0;
}