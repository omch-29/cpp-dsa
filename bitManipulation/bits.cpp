#include <iostream>
#include <vector>
#include<cstring>
#include<algorithm>
#include<string>
#include<unordered_map>
#include <climits>
using namespace std;
int getIthBit(int n, int i){            //mask=1<<i  concept=AND
    return (n&(1<<i)) !=0;
}
int setIthBit(int n,int i){             //mask=1<<i     OR
    return n | (1<<i);                      //make 1
}
int clearIthBit(int n, int i){              //inver mask    and
    return n&~(1<<i);                   //make 0
}
int toggleIthBit(int n,int i){          //XOR
    return n^(1<<i);                //inverse
}
int main(){
    cout<<"enter:";
    int n,i;
    cin>>n;
    cout<<"enter bit";
    cin>>i;
    cout<<toggleIthBit(n,i);

}