#include <iostream>
using namespace std;


void findElement(int arr[], int N, int K) {
    for (int i = 0; i < N; i++) {
        if (arr[i] == K) {
            cout << "Element found at index: " << i << endl;
            return;
        }
    }
    cout << "Element not found in the array." << endl;
}


int main() {
    int arr[] = {1, 3, 5, 7, 9};
    int N = sizeof(arr) / sizeof(arr[0]);
    int K = 5;

    findElement(arr, N, K);
    return 0;
}