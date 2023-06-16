#include <stdio.h>
/**
  * main - entry point
  *
  * Return: always (success)
  */
int main() {
    int i = 0;
    int j = 1;
    
    while (i <= 98) {
        while (j <= 99) {
            putchar('0' + (i / 10));    // Print the tens digit of the first number
            putchar('0' + (i % 10));    // Print the ones digit of the first number
            putchar(' ');               // Print a space
            putchar('0' + (j / 10));    // Print the tens digit of the second number
            putchar('0' + (j % 10));    // Print the ones digit of the second number
            
            if (i != 98 || j != 99) {
                putchar(',');           // Print a comma between numbers
                putchar(' ');           // Print a space after comma
            }
            
            // Break the inner loop if we have reached the maximum of eight putchar calls
            if (i == 0 && j == 7)
                break;
            
            j++;
        }
        
        // Break the outer loop if we have reached the maximum of eight putchar calls
        if (i == 7)
            break;
        
        i++;
        j = i + 1;
    }
    
    return 0;
}

