#include <stdio.h>
#include <ctype.h>
int main() 
{
    FILE *fp;
    char ch;
    int word_count = 0;
    int in_word = 0;

    fp = fopen("myinfo.txt", "r");  // Open file in read mode

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    while ((ch = fgetc(fp)) != EOF) {
        if (isspace(ch) || ch == '\n') {
            in_word = 0;
        } else if (in_word == 0) {
            in_word = 1;
            word_count++;
        }
    }
    fclose(fp);
    printf("Total words in the file: %d\n", word_count);
    return 0;
}
