#include <stdio.h>
int gcd(int a,int b){
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}
int main() {
    int a=3;
    int b=5;
    int lcm=a*b/gcd(a,b);
    printf("%d",lcm);
    
    return 0;
}
