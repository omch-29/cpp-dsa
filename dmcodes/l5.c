#include<stdio.h>
#include<math.h>
void print(int *num,int n){
    for(int i=0;i<n;i++){
        printf("%d",num[i]);
    }
    printf("\n");
}
int main(){
    int i,j,n,num[10];
    printf("Enter size:\n");
    scanf("%d",&n);
    printf("Enter elements\n");
    for(i=0;i<n;i++) scanf("%d",&num[i]);
    printf("permutations are:-\n");
    for(i=0;i<n;i++){
        for(j=0;j<n-1;j++){
            int temp=num[j];
            num[j]=num[j+1];
            num[j+1]=temp;
            print(num,n);
        }
    }
    return 0;
}