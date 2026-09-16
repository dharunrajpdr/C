#include <stdio.h>
#include <string.h>
int main() {

    char str1[]="programming";
    int count=0;
    for(int i=0;i<strlen(str1);i++){
        if(strchr("aeiouAEIOU",str1[i])){
            count++;
        }
    }
    printf("No.of Vowels: %d",count);
    return 0;
}
