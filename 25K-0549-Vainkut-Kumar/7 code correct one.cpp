#include <stdio.h>

int main() {
    char name[100]; // to store full name with spaces
    int age;

    // Ask user for name
    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin); // reads a full line including spaces

    // Remove the newline character at the end, if present
    size_t len = 0;
    while (name[len] != '\0') {
        if (name[len] == '\n') {
            name[len] = '\0';
            break;
        }
        len++;
    }

    // Ask user for age
    printf("Enter your age: ");
    scanf("%d", &age);

    // Print the greeting
    printf("Hello %s, you are %d years old\n", name, age);

    return 0;
}
