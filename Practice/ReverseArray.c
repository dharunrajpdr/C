#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=size-1;i>=0;i--){
        printf("%d ",arr[i]);
    }
    return 0;
}
