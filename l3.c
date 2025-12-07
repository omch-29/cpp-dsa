#include<stdio.h>
#include<math.h>
int main(){
    int n;
    char set[20];
    printf("Enter number of elements:");
    scanf("%d",&n);
    printf("\nEnter elemnets\n");
    for(int i=0;i<n;i++){
        scanf(" %c",&set[i]);
    }
    int total=pow(2,n);
    printf("\nPower set is:");
    for(int i=0;i<total;i++){
        printf("{");
        int first=1;
        int mask=i;
        for(int j=0;j<n;j++){
            if(mask%2){
                if(!first) printf(",");
                printf("%c",set[j]);
                first=0;
            }
            mask/=2;
        }
        printf("}\n");
    }
}