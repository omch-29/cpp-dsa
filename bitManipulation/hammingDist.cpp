//between two integers is the number of positions at which the corresponding bits are different.
#include<bits/stdc++.h>
using namespace std;

int hd(int x, int y){
    int val = x^y,cnt=0;
    while(val){                                                    //same = 0, different = 1          //                       
        val = val&(val-1);
        cnt++;
    }
    return cnt;
}
int hd2(int x, int y){
    int val = x^y,cnt=0;
    while(val){
        cnt+=val&1;     //last bit
        val>>=1;        //removing last bit
    }
    return cnt;
}

int main(){
    cout<<hd(1,4)<<endl<<hd(3,1);
    cout<<endl;
    cout<<hd2(1,4)<<endl<<hd2(3,1);
}