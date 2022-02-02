#include <stdio.h>
int input_array_size()
{
  int s;
  printf("Enter array size");
  scanf("%d",&s);
  return s;
}

void input_array(int n,int a[n])
{
  int num;
  printf("Enter the numbers ");
  for(int i=0;n>i;i++)
  {
    scanf("%d",&num);
    a[i]=num;
  }
}

int sum_n_arrays(int n,int a[n])
{
  int sum=0;
  for(int i=0;n>i;i++)
  {
    sum+=a[i];
  }
  return sum;
}

void out_put(int n,int a[n],int sum)
{
  for(int i=0;n-1>i;i++)
  {
    printf("%d+",a[i]);
  }
  printf("%d is %d",a[n-1],sum);
}

int main()
{
  int size,sum;
  size=input_array_size();
  int a[size];
  input_array(size,a);
  sum=sum_n_arrays(size,a);
  out_put(size,a,sum);
  return 0;
}