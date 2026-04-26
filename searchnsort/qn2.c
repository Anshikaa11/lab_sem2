#include<stdio.h>
int main(){
    int n,arr[100],x,l=0,r,mid;
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    scanf("%d",&x);
    r=n-1;
    while(l<=r){
        mid=(l+r)/2;
        if(arr[mid]==x){
            printf("Found at %d\n",mid);
            return 0;
        }
        else if(arr[mid]<x) l=mid+1;
        else r=mid-1;
    }
    printf("Not Found\n");
}