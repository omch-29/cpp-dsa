//num1 = "11", num2 = "123" = "134";
#include<bits/stdc++.h>
using namespace std;

string addStrings(string num1, string num2){
    int carry=0;
    int i=num1.size()-1,j=num2.size()-1;
    string res="";
    while(i>=0 || j>=0 || carry){
        int sum=carry;
        if(i>=0) sum+=(num1[i--]-'0');          //-'0' to convert str into int
        if(j>=0) sum+=(num2[j--]-'0');
        res+=(sum%10)+'0';                      //+'0' to convert int-> string
        carry=(sum/10);
    }
    reverse(res.begin(), res.end());
    return res;
}
int main(){
    cout<<addStrings("456", "77");
}