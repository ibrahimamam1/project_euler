#include<stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPrime(long long x)
{
    for(int i=2; i<=sqrt(x); i++)
    {
        if(x % i == 0) return false;
    }
    return true;
}
int main()
{
  long long sum = 0;

  for(int i=2; i<2000000; i++)
  {
    if(isPrime(i)) sum += i;
  }
  printf("%lld" , sum);
}