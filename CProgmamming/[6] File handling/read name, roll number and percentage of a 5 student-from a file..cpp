#include <stdio.h>
int main() 
{
    FILE *fp;
    int vn;
    char name[25];
    float per;
    fp = fopen("stu.txt", "r");
    while (fscanf(fp, "%d %s %f", &vn, name, &per) != EOF) { 
        printf("Roll No: %d \t Name: %s \t Percentage: %.2f\n", vn, name, per); 
    }
    fclose(fp);
    printf("Data read from file successfully.\n");
}
