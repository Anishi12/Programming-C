#include <stdio.h>
int main() 
{
    FILE *fp;
    char name[25] = "Anish Dhamala";
    fp = fopen("myinfo.txt", "w"); 
    fprintf(fp, "%s", name); 
    fclose(fp);
    printf("Name written to file successfully.\n");
}
