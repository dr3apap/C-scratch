#include <stdio.h>
#include <stdint.h>

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

}
