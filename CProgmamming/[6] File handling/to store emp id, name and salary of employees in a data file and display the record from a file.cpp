#include <stdio.h>
int main() 
{
    FILE *fp;
    int eid;
    char name[25];
    float sal;
    int i;
    fp = fopen("emp.txt", "w");
    for (i = 1; i <= 10; i++) 
	{
        printf("Enter emp_id: ");
        scanf("%d", &eid);
        printf("Enter employee's Name: ");
        scanf("%s", name);
        printf("Enter employee's Salary: ");
        scanf("%f", &sal);
        fprintf(fp, "%d %s %.2f\n", eid, name, sal);  // Writing to the file
    }
    fclose(fp);
    fp = fopen("emp.txt", "r");
    printf("\nEmployee Records:\n");
    while (fscanf(fp, "%d %s %f", &eid, name, &sal) != EOF) {
        printf("Employee ID: %d \t Name: %s \t Salary: %.2f\n", eid, name, sal);  // Displaying employee data
    }
    fclose(fp);
}
