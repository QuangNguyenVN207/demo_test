#include<iostream>
using namespace std;
//1.	Viết một hàm đệ quy để tính số Fibonacci thứ n với n ≥ 1.

int fib(int n){
    if (n==0) return 0;
    if (n==1) return 1;
    return fib(n-1) + fib(n-2);
}

int main() {
    int n;
    cin >> n;
    cout << fib(n);
    return 0;
}