#include <iostream>
using namespace std;

/*
5.	Viết các hàm để kiểm tra một chuỗi có phải là palindrome (đối xứng) 
hay không theo hai cách:
(a)	Sử dụng cách tiếp cận lặp (duyệt chuỗi từ hai đầu).
*/

int main(){
    string s;
    cout << "Nhập chuỗi s: ";
    cin >> s;
    int n = s.size();
    int m = n;

    while (n > 0){
        if (s[0] == s[n-1]){
            s = s.substr(1,n-2);
            n -= 2;
            continue;
        }
        else {
            cout << "Đây không phải là chuỗi đối xứng.";
            return 0;
        }      
    }
    cout << "Đây là chuỗi đối xứng.";
    return 0;
}