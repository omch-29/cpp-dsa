#include<stdio.h>
#include<math.h>
int main(){
    int n;
    char set[20];
    printf("Enter number of elements:");
    scanf("%d",&n);
    printf("Enter elements:");
    for(int i=0;i<n;i++) scanf(" %c",&set[i]);

    int total=pow(2,n);
    for(int i=0;i<total;i++){
        printf("{");
        int mask=i,fst=1;
        for(int j=0;j<n;j++){
            if(mask%2){
                if(!fst) printf(",");
                printf("%c",set[j]);
                fst=0;
            }
            mask/=2;
        }
        printf("}");
    }
}