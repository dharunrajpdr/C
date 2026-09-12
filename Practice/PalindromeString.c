#include <stdio.h>
#include <string.h>
#include<ctype.h>
int main() {

    char str1[100];
    scanf("%s",str1);

    int left=0;
    int right=strlen(str1)-1;
    while(left<=right){
        if(islower(str1[left])!=islower(str1[right])){
            printf("%s","Not Palindrome");
            return 0;
        }
        left++;
        right--;
    }
    printf("%s","Palindrome");

    return 0;
}
