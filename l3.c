#include<stdio.h>
#include<math.h>
int main(){
    int i,j,temp,n,table[40][10]={0};
    char set[20];
    printf("\nEnter number of elemnts");
    scanf("%d",&n);
    printf("\nEnter the set elements:");
    for(i=0;i<n;i++){
        scanf(" %c",&set[i]);
    }
    printf("\nBinary representation:\n");
    for(i=0;i<pow(2,n);i++){
        temp=i;
        for(j=0;j<n;j++){
            table[i][j]=temp%2;
            temp/=2;
            printf("%d",table[i][j]);
        }
        printf("\n");
    }
    printf("\npower set is:\n");
    for(i=0;i<pow(2,n);i++){
        int first=1;
        printf("{");
        for(j=0;j<n;j++){
            if(table[i][j]==1){
                if(!first) printf(",");
                printf("%c",set[j]);
                first=0;
            }
        }
        printf("}\n");
    }
}