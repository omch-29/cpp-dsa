#include <iostream>
#include <vector>
using namespace std;

int lia(int arr[], int n){
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]> max) max=arr[i];
    }
    return max;
}
int main(){
    int arr[]={2,105,8,7,9,97};
    int n = sizeof(arr) / sizeof(int);
    cout<<lia(arr,n);
}