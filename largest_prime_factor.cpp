#include <iostream>
#include <cmath>
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
  long long n = 600851475143;
  long long i = sqrt(n);

  while (i > 1) 
  {
    if (n % i == 0 && isPrime(i)) 
      std::cout << i << std::endl;
    --i;
  }
  return 0;
}