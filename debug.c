#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

uint32_t max(uint32_t num1, uint32_t num2);

int main(void)
{
    uint32_t i, h;
    i = 0;
    h = 100;
    if (max(i, h) != h) printf("Only in 2022.\n");

    i = 10;
    h = 0;
    if (max(i, h) != i) printf("What even is life?\n");
    printf("All seem to be working fine!\n");
    
    return EXIT_SUCCESS;

}

uint32_t max(uint32_t num1, uint32_t num2)
{   
    uint32_t result = 0;
    if (num1 > result) result =  num1;
    if (num2 > result) result = num2;
    return result;
}
