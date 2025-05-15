#include <stdio.h>
int main() 
{
    FILE *fp;
    char name[30];
    fp = fopen("myfile.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    printf("Enter your name: ");
    scanf("%s", name);
    fprintf(fp, "%s", name);
    fclose(fp);
    if (rename("myfile.txt", "new.txt") != 0) {
        printf("Error renaming file!\n");
        return 1;
    }
    if (remove("new.txt") != 0) {
        printf("Error deleting file!\n");
        return 1;
    }
    printf("File renamed and deleted successfully.\n");
    return 0;
}
