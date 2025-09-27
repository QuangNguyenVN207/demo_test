#include<iostream>
using namespace std;

//2.Viết một hàm đệ quy để tính ước số chung lớn nhất (GCD) của hai số nguyên 
//a và b bằng thuật toán Euclid.

int GCD(int a, int b){
    if (a<b){
        int c = a;
        a = b;
        b = c;
    }
    if (b == 0) return a;
    int r;
    r = a % b;
    a = b;
    b = r;
    return GCD(a,b);
}

int main(){
    int a,b;
    cout << "Nhập vào số nguyên a,b: ";
    cin >> a >> b;
    cout << "ƯCLN của " << a << " và " << b << " là: " << GCD(a,b);
    return 0;
}