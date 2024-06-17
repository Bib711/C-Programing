#include <stdio.h>

int main() {
    FILE *ip, *op;
    char ch;
    int characters = 0, words = 0, lines = 0;

    ip = fopen("sample.txt", "r");
    if (ip == NULL) {
        printf("Cannot open input file\n");
    return 1;
    }
    printf("Content's in the file are:");
    


    op = fopen("output.txt", "w");
    if (op == NULL) {
        printf("Cannot open output file\n");
        return 1;
    }

    while ((ch = fgetc(ip)) != EOF) {
        printf("%c",ch);
        characters++;
        if (ch == '\n' || ch == '\0') {
            lines++;
        }
        if (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\0') {
            words++;
        }
    }

    fprintf(op, "Characters: %d\nWords: %d\nLines: %d\n", characters, words, lines);

    fclose(ip);
    fclose(op);

    ip = fopen("output.txt", "r");
    if (ip == NULL) {
        printf("Cannot open input file\n");
    return 1;
    }
    printf("\n");
    while ((ch = fgetc(ip)) != EOF) {
        printf("%c",ch);
    }
    fclose(ip);
    return 0;
}