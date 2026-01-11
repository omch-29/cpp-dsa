#include<stdio.h>
int main(){
    int i,j,a,b,n,ne=1,cost[10][10],mincost=0,min,visited[10]={0};
    printf("Enter size:");
    scanf("%d",&n);
    printf("Enter adjacency matrix:-");
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
        printf("Edge(%d,%d)=%d",a,b,min);
        mincost+=min;
        cost[a][b]=cost[b][a]=999;
        visited[b]=1;
        ne++;
    }
}
    printf("Minimum i sof size %d",mincost);
    return 0;
}