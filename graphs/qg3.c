#include<stdio.h>
#define MAX 10
int graph[MAX][MAX],visited[MAX],n;
void dfs(int v){
visited[v]=1;
printf("%d ",v);
for(int i=0;i<n;i++){
if(graph[v][i] && !visited[i])
dfs(i);
}
}
int main(){
scanf("%d",&n);
for(int i=0;i<n;i++)
for(int j=0;j<n;j++)
scanf("%d",&graph[i][j]);
for(int i=0;i<n;i++)
visited[i]=0;
dfs(0);
return 0;
}