#include <stdio.h>
int main() 
{
    FILE *fp;
    int roll_no;
    char name[25];
    float per;
    fp = fopen("1stu.txt", "a");
    printf("Enter student's Roll No: ");
    scanf("%d", &roll_no);
    printf("Enter student's Name: ");
    scanf("%s", name);
    printf("Enter student's percentage: ");
    scanf("%f", &per);
    fprintf(fp, "Roll No: %d, Name: %s, Percentage: %.2f\n", roll_no, name, per);
    fclose(fp);
    printf("Student data appended successfully.\n");
    return 0;
}
