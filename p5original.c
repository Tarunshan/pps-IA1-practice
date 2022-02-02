#include <stdio.h>
#include <math.h>
float input()
{
  float a;
  printf("Enter number ");
  scanf("%f",&a);
  return a;
}

float my_sqrt(float n)
{
  float s;
  s=sqrt(n);
  return s;
}

void output(float n,float sqrt_result)
{
  printf("The square root of %f is %f",n,sqrt_result);
}

int main()
{
  int n,result;
  n=input();
  result=my_sqrt(n);
  output(n,result);
  return 0;
}
