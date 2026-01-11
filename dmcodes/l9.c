#include<stdio.h>
int main(){
    int a,b,i,j,n,ne=1,min,mincost=0,cost[10][10],visited[10]={0};
    printf("Enter size:\n");
    scanf("%d",&n);
    printf("Enter adjacency Matrix:\n");
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
            visited[b]=1;
            ne++;
        }
    }
    printf("minmum weight=%d",mincost);
    return 0;
}