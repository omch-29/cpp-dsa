//Without extra space

#include <iostream>
#include <climits>
#include <vector>
using namespace std;

int ra(int arr[], int n){
    int st=0, end=n-1;
    while(st<end){
        int temp=arr[st];
        arr[st]=arr[end];
        arr[end]=temp;
        // swap(arr[st], arr[end]);
        st++;
        end--;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}
//with extra space
int esra(int arr[], int n){
    int earr[n];
    int j=0;
    for(int i=n-1;i>=0;i--){
        earr[j++]=arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<earr[i];
    }
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10,11,12};
    int n=12;
    // cout<<ra(arr,n);
    ra(arr,n);
}