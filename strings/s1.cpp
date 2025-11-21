#include <iostream>
#include <vector>
#include<cstring>
#include <climits>
using namespace std;
//convert to uppercase
void toup(char word[]){
    int n =strlen(word);
    for(int i=0;i<n;i++){
        char ch = word[i];
        if(ch>-'A' && ch<='Z') continue;
        else{
            word[i]=ch-'a'+'A';
        }
    }
}
int main(){
    char word[]={"aaPPLe"};
    toup(word);
    cout<<word;
}