#include <iostream>
using namespace std;

int binaryToDecimal(string s) {
    int num = 0;

    for(char c : s){
        num = num*2 + (c-'0');
        //  num = (num << 1) | (c - '0');
    }

    return num;
}

int main() {
    string s = "1011";
    cout << binaryToDecimal(s);
}