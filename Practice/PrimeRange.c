#include <stdio.h>
#include<stdbool.h>
#include<math.h>
bool isPrime(int n){
    if(n<=1){
        return false;
    }
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main() {
    int a=10;
    int b=30;
    for(int i=a;i<=b;i++){
        if(isPrime(i)){
            printf("%d ",i);
        }
    }
    
    return 0;
}
