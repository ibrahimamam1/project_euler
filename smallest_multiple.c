//The task is to find the smallest number that divides all the numbers from 1 to 20

#include<stdio.h>

int main()
{
  int n = 2520; //This is the smallest number that divides all numbers from 1 to 10. Let's start from there
  int found = 0;

  while(!found)
  {
    found = 1;
    for(int i=10; i < 20; i++)
    {
      if(n % i != 0)
      {
        found = 0;
        break;
      }
    }
    if(found)
    {
      printf("%d" , n);
      break;
    }
    n++;  
  }
  
}