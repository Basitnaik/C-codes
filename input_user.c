#include<stdio.h>
int main(){
    int arr[100],n;
    printf("enter the elements:");
    scanf("&d",&n);
    printf("enter %d integer",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("arry elementsare;\n");
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;
}