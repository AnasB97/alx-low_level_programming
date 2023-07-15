#include <stdio.h>

/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */

int main() {
    char lowercase;
    char uppercase;

    printf("Lowercase and Uppercase alphabets:\n");
    for(lowercase = 'a'; lowercase <= 'z'; lowercase++) {
        putchar(lowercase);
    }
    for(uppercase = 'A'; uppercase <= 'Z'; uppercase++) {
        putchar(uppercase);
    }

    return 0;
}

