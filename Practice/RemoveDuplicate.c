#include <stdio.h>
#include <limits.h>
int main() {

    int arr[]={1,2,2,3,1};
    int length=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<length;i++){
        int duplicate=0;
        for(int j=0;j<i;j++){
            if(arr[i]==arr[j]){
                duplicate=1;
                break;
            }
        }
        if(duplicate==0){
            printf("%d ",arr[i]);
        }
    }
    
    return 0;
}
