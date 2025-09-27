#include <iostream>
using namespace std;

//3.	Viết một hàm đệ quy để tính số chữ số của một số nguyên dương n.

int scs(int n){
    if (n/10 == 0) return 1;
    return 1 + scs(n/10);
}

int main(){
    int n;
    cout << "Nhập vào số n: ";
    cin >> n;
    cout << "Số "<< n << " có " << scs(n)<< " chữ số.";
    return 0;
}