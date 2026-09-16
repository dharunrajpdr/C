#include <stdio.h>
#include<string.h>
int main() {
    
    char str1[]="siwss";
    for(int i=0;i<strlen(str1);i++){
        int count=0;
        for(int j=i+1;j<strlen(str1);j++){
            if(str1[i]==str1[j]){
                count=1;
                break;
            }
        }
        if(count==0){
            printf("%c",str1[i]);
            return 0;
        }
    }
    return 0;
}
