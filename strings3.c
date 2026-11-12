
#include <stdio.h>

int main() {
    // Declare and initialize the string
    char word[] = "Code";

    // Access the first character (index 0)
    char firstChar = word[0];  // 'C'
    printf("First character: %c\n", firstChar);

    // Access the fourth character (index 3)
    char fourthChar = word[3];  // 'e'
    printf("Fourth character: %c\n", fourthChar);

    // Modify the last character (originally 'd' at index 2)
    word[2] = 'm';

    // Print the modified full string
    printf("Modified word: %s\n", word); // Output: Come

    return 0;
}