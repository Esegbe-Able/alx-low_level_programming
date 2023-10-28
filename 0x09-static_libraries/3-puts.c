#include "main.h"
#include<stdio.h>

/**
 * _puts - function takes a string pointer  and prints the characters in the string 
 *
 * Return: Always 0 (Success)
 */
void _puts(char *s) {
    if (s != NULL) {
        while (*s) {
            putchar(*s);
            s++;
        }
        putchar('\n'); // Print a newline character at the end
    }
}
