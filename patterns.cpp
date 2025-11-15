#include<iostream>
using namespace std;
int numSquare(int rows){
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=rows;j++){
            cout<<i<<"";
        }
        cout<<endl;
    }
}
int star(int rows){
    for(int i=0;i<rows;i++){
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int invStar(int n){
    for(int i=0;i<n;i++){
        for(int j=1;j<(n-i+1);j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int hollowRec(int n){
    for(int i=0;i<n;i++){
        cout<<"*";
        for(int j=1;j<n-1;j++){
            if(i==1 || i==n){
                cout<<"*";
            }else cout<<"";
        }
        cout<<"*"<<endl;
    }
}
int main(){
    // numSquare(5);
    // star(5);
    // invStar(5);
    hollowRec(5);
}