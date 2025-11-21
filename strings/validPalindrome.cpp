#include <iostream>
#include <vector>
#include<cstring>
#include <climits>
using namespace std;
bool palind(char word[]){
    int n=strlen(word);
    int st=0,end=n-1;
    while(st<end){
        if(word[st++]!=word[end--]){ 
            cout<<"false";
            return false;
        }
    }
    cout<<"yes";
    return true;
}
int main(){
    char word[]={"racecar"};
    cout<<palind(word);
}