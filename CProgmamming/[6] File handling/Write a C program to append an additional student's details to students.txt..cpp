#include <stdio.h>

int main() 
{
    FILE *fp;
    char name[25];
    int age;
    float marks;

    fp = fopen("students.txt", "a");

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter Name: ");
    scanf("%s", name);
    printf("Enter Age: ");
    scanf("%d", &age);
    printf("Enter Marks: ");
    scanf("%f", &marks);

    fprintf(fp, "%s %d %.2f\n", name, age, marks);

    fclose(fp);
    printf("Student data appended successfully.\n");

    return 0;
}

