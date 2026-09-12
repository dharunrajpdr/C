#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);

    int octal[32];
    int i=0;
    while(n>0){
        int mod=n%8;
        octal[i++]=mod;
        n/=8;
    }
    for(int j=i-1;j>=0;j--){
        printf("%d",octal[j]);
    }
    return 0;
}
