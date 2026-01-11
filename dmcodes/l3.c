#include<stdio.h>
#include<math.h>
int main(){
    int a,b,i,j,n,arr[10];
    printf("Enter number of elements:\n");
    scanf("%d",&n);
    printf("Enter elements of set:\n");
    for(i=0;i<n;i++) scanf("%d",&arr[i]);
    int total=pow(2,n);
    for(i=0;i<total;i++){
        printf("{");
        int mask=i,fst=1;
        for(j=0;j<n;j++){
            if(mask%2){
                if(!fst) printf(",");
                printf("%d",arr[j]);
                fst=0;
            }
            mask/=2;
        }
        printf("}\n");
    }
    return 0;

}