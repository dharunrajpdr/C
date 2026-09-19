#include <stdio.h>
#include<string.h>
#include <ctype.h>
int main() {
    char str[100]="dharun";
   
    int l=0;
    while(l<strlen(str)){
        l++;
    }
    // printf("%d",i);
    char str1[l+1];
    int j=0;
    for(int i=0;i<strlen(str);i++){
        char c=str[i];
        if(strchr("aeiouAEIOU",c)){
            c=tolower(c);
        }
        if(c=='a') str1[j++]='2';
        else if(c=='e') str1[j++]='3';
        else if(c=='i') str1[j++]='4';
        else if(c=='o') str1[j++]='5';
        else if(c=='u') str1[j++]='6';
        else str1[j++]=str[i];
    }
    str1[j++]='\0';
    printf("%s",str1);
        
}
