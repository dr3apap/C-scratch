#include <stdio.h>
#include <stdint.h>

int next_alpha(uint8_t* c);

int main(void)
{
    uint8_t a_char = 'z';

    // Declare a pointer and initialize to address of a_char
    uint8_t* a_char_pointer = &a_char;

    // Read and print the value of a_char_pointer 
    printf("The value of a_char_pointer is : %p\n", a_char_pointer);

    // Read the value of the address refrenced by a_char_pointer
    printf("The value of the address in a a_char_pointer is: %c\n", *a_char_pointer); 

    // Write to the address refrenced by a_char_pointer
    *a_char_pointer = 'y';
    // Read from a_char
    printf("The value of a_char is: %c\n", a_char); 

    uint8_t c = 'a';
    printf("current alphabet is : %c\n", c);

    // Address of expression argument
    next_alpha(&c);
    printf("Next alphabet is : %c\n", c);

    // Pointer argument
    uint8_t* c_pointer = &c;
    next_alpha(c_pointer);
    printf("Next alphabet is : %c\n", c);

    // Alphabet in lower case
    uint8_t first_letter = 'a';
   for (int i = 0; i <= 24; i++){
       if (first_letter == 'a') 
           printf("%c", first_letter);
       next_alpha(&first_letter);
       printf("%c", first_letter);
   }
   printf("\n");

   // Alphabet in upper case
    uint8_t first_upper = 'A';
   for (int i = 0; i <= 24; i++){
       if (first_upper == 'A')
           printf("%c", first_upper);
       next_alpha(&first_upper);
       printf("%c", first_upper);
   }
   printf("\n");

   return 0;
}


int next_alpha(uint8_t* c)
{
    *c = (*c) + 1;
   return 0;
}

