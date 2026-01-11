#include<stdio.h>
#include<math.h>
int main(){
    int st=0,n,nums[10],tar,f=0;
    printf("enetr size:\n");
    scanf("%d",&n);
    printf("enter elements:\n");
    for(int i=0;i<n;i++) scanf("%d",&nums[i]);
    printf("target:\n");
    scanf("%d",&tar);
    int end=n-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(nums[mid]==tar){
            f=1;
            printf("value is at %d",mid+1);
            break;
        }
        else if(nums[mid]<tar) st=mid+1;
        else end=mid-1;
    }
    if(!f) printf("no");
    return 0;
}