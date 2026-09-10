#include <stdio.h>
#include <stdbool.h>
#include<math.h>
int main() {
    int n=17;
    if(n<=1){
        printf("%s","Not Prime");
    }
    bool isPrime=true;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            isPrime=false;
            break;
        }
    }
    if(isPrime){
        printf("%s","Prime");
    }
    else{
        printf("%s","Not Prime");
    }
    return 0;
}
