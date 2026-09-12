#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);

    int binary[32];
    int i=0;
    while(n>0){
        int mod=n%2;
        binary[i++]=mod;
        n/=2;
    }
    for(int j=i-1;j>=0;j--){
        printf("%d",binary[j]);
    }
    return 0;
}
