#include <stdio.h>
int input_n()
{
  int a;
  printf("Enter the number ");
  scanf("%d",&a);
  return a;
}

int sum_n(int n)
{
  int sum=0;
  for(int i=1;n>=i;i++)
  {
    sum+=i;
  }
  return sum;
}

void output(int n,int sum)
{
  for(int i=1;n>i;i++)
  {
    printf("%d+",i);
  }
  printf("%d is %d",n,sum);
}

int main()
{
  int n,sum;
  n=input_n();
  sum=sum_n(n);
  output(n,sum);
  return 0;
}