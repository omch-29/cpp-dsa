#include<stdio.h>
#include<math.h>
int main(){
    int n,tar,f=0;
    printf("Enter size of array:");
    scanf("%d",&n);
    int nums[n];
    printf("enter elements");
    for(int i=0;i<n;i++) scanf("%d",&nums[i]);
    printf("enter target:");
    scanf("%d",&tar);
    int st=0,end=n-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(nums[mid]==tar){
            f=1;
         printf("Position of %d is %d",tar,mid+1);
         break;
        }
        if(nums[mid]<tar) st=mid+1;
        else end=mid-1;
    }
    if(!f){
        printf("invalid target");
    }
}