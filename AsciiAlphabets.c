// C program to print alphabets

#include <stdio.h>
  
void lowercaseAlphabets()
{
    // for lowercase
    for (int c = 97; c <= 122; ++c)
    {
        printf("%c ", c);
    }
    printf("\n");
}

// for upper case
void uppercaseAlphabets()
{
    for (int c = 65; c <= 90; ++c)
    {
        // print its ascii values
        printf("%c ", c);
    }
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
