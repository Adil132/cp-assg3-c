/*
    Roll No: 21
    Student Name: Sayyed Adil Dastagir 
    Program Title: Program to print right triangle using asterisk
    
    Task Given By:
        -Roll No: 33
        -Student Name: Hasnain shaikh
*/

#include <stdio.h>

int main() {
    int rows;
    // Print a message to prompt user input.
    printf("Input number of rows : ");
    scanf("%d", &rows);

    // Start a loop to generate rows of asterisks.
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++)
            printf("*");  // Print an asterisk.

        printf("\n");  // Move to the next line for the next row.
    }
}

/*OUTPUT
Input number of rows : 5
*
**
***
****
*****

*/
