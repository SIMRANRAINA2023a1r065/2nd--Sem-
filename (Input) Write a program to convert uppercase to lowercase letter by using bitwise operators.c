// Write a program to convert uppercase to lowercase letter by using bitwise operators
#include <stdio.h>
char toLower(char c) {
    // Check if the character is uppercase
    if (c >= 'A' & c <= 'Z') {
        // Convert to lowercase by flipping the 5th bit
        // Subtracting 32 (00100000 in binary) from the ASCII value of the uppercase letter
        // results in the corresponding lowercase letter
        return c ^ 32;
    } else {
        // If the character is not uppercase, return it as is
        return c;
    }
}

int main() {
    char uppercaseLetter = 'S';
    char lowercaseLetter = toLower(uppercaseLetter);
    printf("Uppercase letter: %c\nLowercase letter: %c\n", uppercaseLetter, lowercaseLetter);
    return 0;
}