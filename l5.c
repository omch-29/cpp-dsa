#include<stdio.h>
#include<math.h>
void print(int *num,int n){
    for(int i=0;i<n;i++){
        printf("%d ",num[i]);
    }
    printf("\n");
}
int main(){
    int num[10];
    int temp,i,j,n;
    printf("\nEnter no. of elements");
    scanf("%d",&n);
    printf("\nEnter numbers to see all permutations:");
    for(int i=0;i<n;i++) scanf("%d",&num[i]);
    printf("\npermutations are:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n-1;j++){
            temp=num[j];
            num[j]=num[j+1];
            num[j+1]=temp;
            print(num,n);
        }
    }
}