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



-----------------------------------------------------------------------------------------------------------------
  
//Output:- 

// Uppercase Alphabets
// A B C D E F G H I J K L M N O P Q R S T U V W X Y Z 
// Lowercase Alphabets
// a b c d e f g h i j k l m n o p q r s t u v w x y z 

  
// Note:- We can also perform this task to using directly alphabets on the place of values(97 to 122 & 65 to 90).


