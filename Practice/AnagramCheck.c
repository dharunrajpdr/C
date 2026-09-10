#include <stdio.h>
#include <string.h>

int main() {
    char str1[]="silent";
    char str2[]="listen";
    int freq[256]={0};
    if(strlen(str1)!=strlen(str2)){
        printf("%s","Not Anagram");
        return 0;
    }
    for(int i=0;i<strlen(str1);i++){
        freq[str1[i]]++;
        freq[str2[i]]--;
    }
    for(int i=0;i<256;i++){
        if(freq[i]!=0){
        printf("%s","Not Anagram");
        return 0;
        }
    }
    printf("%s","Anagram");
    return 0;
}
