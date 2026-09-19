#include <stdio.h>
int main() {
    int a=70,b=40,c=35;
    if(a>b && a>c){
        printf("Largest is %d",a);
    }
    else if(b>c){
        printf("Largest is %d",b);
    }
    else{
        printf("Largest is %d",c);
    }
    return 0;
}
