#include<stdio.h>
#include<math.h>
void print(int *num, int n){
    for(int i=0;i<n;i++){
        printf("%d",num[i]);
    }
    printf("\n");
}
int main(){
    int n;
    int num[10];
    printf("Enter number of elements:");
    scanf("%d",&n);
    printf("Enter elements:");
    for(int i=0;i<n;i++) scanf("%d",&num[i]);

    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            int temp=num[j];
            num[j]=num[j+1];
            num[j+1]=temp;
            print(num,n);
        }
    }
}