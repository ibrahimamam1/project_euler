//find sum of all even fibonacci numbers between 1 and 4 million

#include<stdio.h>

int main()
{
    int previous_term = 0;
    int second_previous = 0;

    int sum = 0;
    for(int i=1; i<4000000; i= previous_term + second_previous)
    {
        if(i % 2 == 0) sum += i;

        second_previous = previous_term;
        previous_term  = i;
    }

    printf("%d" , sum);
}
