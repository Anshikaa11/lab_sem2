#include<stdio.h>
int main(){
    int n,x,arr[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    scanf("%d",&x);
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            printf("Found at %d",i);
            return 0;
        }
    }
    printf("Not Found");
}