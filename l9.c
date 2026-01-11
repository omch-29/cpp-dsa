#include<stdio.h>
int main(){
    int a,b,i,j,ne=1,n,min,mincost=0,cost[10][10],visited[10]={0};
    printf("numver of elements:");
    scanf("%d",&n);
    printf("Enter adjacency matrix:\n");
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            scanf("%d",&cost[i][j]);
            if(cost[i][j]==0) cost[i][j]=999;
        }
    }
    visited[1]=1;
    while(ne<n){
        min=999;
        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
                if(visited[i]==1){
                    if(cost[i][j]<min){
                        min=cost[i][j];
                        a=i;
                        b=j;
                    }
                }
            }
        }
        if(visited[a]==0 || visited[b]==0){
            printf("Edge(%d,%d)=%d\n",a,b,min);
            mincost+=min;
            cost[a][b]=cost[b][a]=999;
            ne++;
            visited[b]=1;
        }
    }
    printf("minimu =%d\n",mincost);
    return 0;
}