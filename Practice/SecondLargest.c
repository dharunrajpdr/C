#include <stdio.h>
#include <limits.h>
int main() {

    int arr[]={10,25,5,40,50,30,15};
    int max1=INT_MIN;
    int max2=INT_MIN;

    int length=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<length;i++){
        if(arr[i]>max1){
            max2=max1;
            max1=arr[i];
        }
        if(arr[i]>max2 && arr[i]!=max1){
            max2=arr[i];
        }
    }
    printf("%d",max2);
    return 0;
}
