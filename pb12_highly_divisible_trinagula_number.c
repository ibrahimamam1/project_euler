#include <stdio.h>

int main(int argc, char *argv[])
{
  unsigned long long n = 1; //count of triangular numbers found
  unsigned long long sum = 1; //value of nth triangular number
  unsigned long long factor_count; //factor count of nth triangular number

  while(1) {
    n++;
    sum += n;
    factor_count = 1; //the number itself will always be a factor

    //get factor count
    for(unsigned long long i=1; i<=sum/2; i++) {
      if(sum % i == 0) factor_count++;
    }

    if(factor_count > 500)
      break;
  }

  printf("%lluth triangular number = %llu \nfactor count = %llu" , n , sum , factor_count);
  return 1;
}
