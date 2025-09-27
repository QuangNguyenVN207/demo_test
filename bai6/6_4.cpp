#include<iostream>
using namespace std;

//4.	Viết một hàm lặp để tính số chữ số của một số nguyên dương n.

int main(){
    int n;
    cout << "Nhập vào số nguyên dương n: ";
    cin >> n;
    int m =n;
    int count = 1;
    while (n / 10 != 0){
        n /= 10;
        count ++;
    }
    cout << "Số "<< m << " có "<< count << " chữ số.";
    return 0;
}