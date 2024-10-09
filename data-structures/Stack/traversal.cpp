#include <bits/stdc++.h>
using namespace std;


void printStack(stack<int>& St) {
    while (!St.empty()) {
        cout << St.top() << " ";
        St.pop();
    }
}


int main() {
    stack<int> St;

    St.push(4);
    St.push(3);
    St.push(2);
    St.push(1);

    printStack(St);

    return 0;
}