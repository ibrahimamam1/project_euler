//The task is to find the 10001st Prime Number

#include <math.h>
#include<stdio.h>

int isPrime(long long x)
{
    for(int i=2; i<=sqrt(x); i++)
    {
        if(x % i == 0) return 0;
    }
    return 1;
}

int main()
{
  int n = 13; //6th prime
  for(int i=6; i<10001;)
  {
    if(isPrime(++n)) i++;
  }
  printf("%d" , n);
}