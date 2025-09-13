#include <stdio.h>

int main() {
    FILE *f;
    char ch;

    f = fopen("array1.c", "r");  // अपनी .c file पढ़ रहे हैं
    if(f == NULL) {
        printf("File not found!");
        return 1;
    }

    while((ch = fgetc(f)) != EOF) {
        printf("%c", ch);  // पूरी C file का code print कर देगा
    }

    fclose(f);
    return 0;
}
