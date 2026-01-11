#include<stdio.h>
int main(){
    int a,b,i,j,mincost=0,min,cost[10][10],n,ne=1;
    printf("Enter size:\n");
    scanf("%d",&n);
    printf("Enter adjacency matrix:\n");
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            scanf("%d",&cost[i][j]);
            if(cost[i][j]==0) cost[i][j]=999;
        }
    }
    while(ne<n){
        min=999;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(cost[i][j]<min){
                    min=cost[i][j];
                    a=i;
                    b=j;
                }
            }
        }
        printf("Edge(%d,%d)=%d",a,b,min);
        mincost+=min;
        cost[a][b]=cost[b][a]=999;
        ne++;
    }
    printf("minmum weight=%d",mincost);
}