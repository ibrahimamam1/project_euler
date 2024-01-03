//The task is to find the largest palindrom which is a product of a 3 digit number

#include <stdint.h>
#include<stdio.h>

int isPalindrome(uint64_t x)
{
   uint64_t reversed = 0;
   uint64_t original = x;

    while (x > 0)
    {
        reversed = reversed * 10 + x % 10;
        x /= 10;
    }

    return reversed == original;

    return 1;
}
int main()
{
    uint64_t largestPalindrome = 0;
    for(int i=999; i>0; i--)
    {
        for(int j = 999; j>0; j--)
        {
            uint64_t product = i*j;

            if(isPalindrome(product) && product > largestPalindrome) largestPalindrome = product;
        }
    }
    printf("%lu" , largestPalindrome);
}