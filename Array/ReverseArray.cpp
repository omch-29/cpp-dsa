//Without extra space

#include <iostream>
#include <vector>
using namespace std;

int ra(int arr[], int n){
    int st=0, end=n-1;
    while(st<end){
        int temp=arr[st];
        arr[st]=arr[end];
        arr[end]=temp;
        st++;
        end--;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}
int main(){
    int arr[]={8,2,3,4,5};
    int n=5;
    cout<<ra(arr,n);
}