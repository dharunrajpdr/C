#include <stdio.h>
#include<string.h>
int main() {

    int count=0;
    char str1[100];
    scanf("%s",str1);

    for(int i=0;i<strlen(str1);i++){
        if(strchr("aeiouAEIOU",str1[i])){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
