#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char text[1000];
    int i, in_word = 0, count = 0;

    printf("Enter a paragraph:\n");
    fgets(text, sizeof(text), stdin);

    for (i = 0; i < strlen(text); i++) {
        if (isspace(text[i])) {
            in_word = 0;
        } else if (!in_word) {
            in_word = 1;
            count++;
        }
    }

    printf("Word count: %d\n", count);
    return 0;
}
