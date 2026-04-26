#include<stdio.h>
#define MAX 10
int graph[MAX][MAX],selected[MAX],n;
int main(){
scanf("%d",&n);
for(int i=0;i<n;i++)
for(int j=0;j<n;j++)
scanf("%d",&graph[i][j]);
for(int i=0;i<n;i++)
selected[i]=0;
selected[0]=1;
for(int e=0;e<n-1;e++){
int min=999,x=0,y=0;
for(int i=0;i<n;i++){
if(selected[i]){
for(int j=0;j<n;j++){
if(!selected[j] && graph[i][j] && graph[i][j]<min){
min=graph[i][j];
x=i;y=j;
}
}
}
}
printf("%d-%d ",x,y);
selected[y]=1;
}
return 0;
}