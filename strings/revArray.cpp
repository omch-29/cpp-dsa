#include <iostream>
#include <vector>
#include<cstring>
#include <climits>
using namespace std;
void rev(char word[]){
    int n = strlen(word);
    int st=0,end=n-1;
    while(st<end){
        swap(word[st++], word[end--]);
    }
}
int main(){
    char word[] = {"dcba"};
    rev(word);
    cout<<word;
}