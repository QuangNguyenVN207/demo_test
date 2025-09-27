#include <iostream>
using namespace std;

// (b)	Sử dụng cách tiếp cận đệ quy (kiểm tra ký tự đầu và cuối, sau đó 
// đệ quy trên chuỗi con).

bool doixung(string s){
    if (s=="") return true;
    if (s.size()==1) return true;
    int n = s.size();
    if (s[0] == s[n-1]){
        return doixung(s.substr(1,n-2));
    }
    else {
        return false;
    }
}

int main(){
    string s;
    cout << "Nhập chuỗi s: ";
    cin >> s;
    if (doixung(s)){
        cout << "Đây là chuỗi đối xứng.";
    }
    else {
        cout << "Đây không phải là chuỗi đối xứng.";
    }
    return 0;
}