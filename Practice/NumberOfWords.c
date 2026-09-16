#include <stdio.h>
#include<string.h>
int main() {
    char str[100];
    int count = 0;

    fgets(str, sizeof(str), stdin);

    for (int i = 0;i<strlen(str); i++) {
        if (str[i] == ' ') {
            count++;
        }
    }

    printf("Number of words: %d", count + 1);

    return 0;
}
