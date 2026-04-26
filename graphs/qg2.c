#include<stdio.h>
#define MAX 10
int graph[MAX][MAX],visited[MAX],queue[MAX],n;
void bfs(int v){
int front=0,rear=0;
visited[v]=1;
queue[rear++]=v;
while(front<rear){
int u=queue[front++];
printf("%d ",u);
for(int i=0;i<n;i++){
if(graph[u][i] && !visited[i]){
visited[i]=1;
queue[rear++]=i;
}
}
}
}
int main(){
scanf("%d",&n);
for(int i=0;i<n;i++)
for(int j=0;j<n;j++)
scanf("%d",&graph[i][j]);
for(int i=0;i<n;i++)
visited[i]=0;
bfs(0);
printf("\nDone");
return 0;
}