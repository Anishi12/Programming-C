#include <stdio.h>
struct Student {
    int roll_no;
    char name[25];
    float percentage;
};
int main() 
{
    FILE *fp;
    struct Student s[5];
    int i;
    fp = fopen("students.txt", "w");
    printf("Enter details of 5 students:\n");
    for (i = 0; i < 5; i++) {
        printf("\nEnter Roll No: ");
        scanf("%d", &s[i].roll_no);
        printf("Enter Name: ");
        scanf("%s", s[i].name);
        printf("Enter Percentage: ");
        scanf("%f", &s[i].percentage);
        fprintf(fp, "%d %s %.2f\n", s[i].roll_no, s[i].name, s[i].percentage);
    }
    fclose(fp);
    printf("\nStudent data successfully written to file.\n");
    fp = fopen("students.txt", "r");
    printf("\nDisplaying Student Records from File:\n");
    while (fscanf(fp, "%d %s %f", &s[i].roll_no, s[i].name, &s[i].percentage) != EOF) {
        printf("Roll No: %d \t Name: %s \t Percentage: %.2f\n", s[i].roll_no, s[i].name, s[i].percentage);
    }
    fclose(fp);
    return 0;
}
