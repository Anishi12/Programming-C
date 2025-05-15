#include <stdio.h>
#include <stdlib.h>

// Define a structure for personal details
struct PersonalDetails {
    char name[50];
    int age;
    char gender[10];
    char address[100];
    char phone[15];
};

int main() {
    struct PersonalDetails person;
    FILE *file;

    // Open file in write mode
    file = fopen("personal_details.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Input personal details
    printf("Enter name: ");
    fgets(person.name, sizeof(person.name), stdin);

    printf("Enter age: ");
    scanf("%d", &person.age);
    getchar(); // Consume the newline character left by scanf

    printf("Enter gender: ");
    fgets(person.gender, sizeof(person.gender), stdin);

    printf("Enter address: ");
    fgets(person.address, sizeof(person.address), stdin);

    printf("Enter phone number: ");
    fgets(person.phone, sizeof(person.phone), stdin);

    // Write to file
    fprintf(file, "Name: %s", person.name);
    fprintf(file, "Age: %d\n", person.age);
    fprintf(file, "Gender: %s", person.gender);
    fprintf(file, "Address: %s", person.address);
    fprintf(file, "Phone: %s", person.phone);

    // Close file
    fclose(file);
    printf("Personal details saved successfully.\n");
    
    return 0;
}

