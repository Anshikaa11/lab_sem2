#include<stdio.h>
#define MAX 10
int graph[MAX][MAX],n;
void create(){
    printf("Enter number of vertices: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("Edge %d-%d: ",i,j);
            scanf("%d",&graph[i][j]);
        }
    }
}
void display(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            printf("%d ",graph[i][j]);
        printf("\n");
    }
}
int main(){
    create();
    display();
}