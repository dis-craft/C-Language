#include <stdio.h>
#include <string.h>

void strcopy(char a[], char b[]) {
    int i;
    for (i = 0; a[i] != '\0'; i++) { // Copy characters until null terminator
        b[i] = a[i];
    }
    b[i] = '\0'; // Add null terminator to the destination string
}

int main() {
    char string1[] = "hello"; // Source string
    char string2[10];         // Destination string (make sure it has enough space)

    strcopy(string1, string2); // Call the string copy function

    printf("Copied string: %s\n", string2); // Print the copied string
    return 0;
}

