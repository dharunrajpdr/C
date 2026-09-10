#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    int len=sizeof(arr)/sizeof(arr[0]);
    k=k%len;
    reverse(arr,0,len-1);
    reverse(arr,0,k-1);
    reverse(arr,k,len-1);
    
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
void reverse(int arr[],int i,int j){
    while(i<=j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
}
