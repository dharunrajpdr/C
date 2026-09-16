#include <stdio.h>
#include <string.h>
int main() {

    char str1[]="banana";
    int freq[256]={0};

    for(int i=0;i<strlen(str1);i++){
        freq[(unsigned char)str1[i]]++;
    }
    for(int i=0;i<256;i++){
        if(freq[i]>0){
            printf("%c -> %d\n",i,freq[i]);
        }
    }
    
    return 0;
}
