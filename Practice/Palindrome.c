#include <stdio.h>

int main() {
    int n=123;
    int n1=n;
    int rev=0;
    while(n>0){
        int mod=n%10;
        rev=rev*10+mod;
        n/=10;
    }
    if(n1==rev){
        printf("%s","Palindrome");
    }
    else{
        printf("%s","Not Palindrome");
    }
    return 0;
}
