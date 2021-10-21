
// C program to print alphabets

#include <stdio.h>
  
// Function to print the alphabet
// in lower case
void lowercaseAlphabets()
{
    // for lowercase
    for (int c = 97; c <= 122; ++c)
        printf("%c ", c);
    printf("\n");
}
// Function to print the alphabet
// in upper case
void uppercaseAlphabets()
{
  
    // Run a loop from 65 to 90
    for (int c = 65; c <= 90; ++c)
  
        // print its ascii values
        printf("%c ", c);
  
    printf("\n");
}
  
// Driver program
int main()
{
  
    printf("Uppercase Alphabets\n");
    uppercaseAlphabets();
  
    printf("Lowercase Alphabets\n");
    lowercaseAlphabets();
  
    return 0;
}
