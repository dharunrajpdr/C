#include <stdio.h>

int main() {
    int n=12345;
    int sum=0;
    while(n>0){
        int mod=n%10;
        sum+=mod;
        n/=10;
    }
    printf("%d",sum);
    return 0;
}
