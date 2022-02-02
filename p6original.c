#include <stdio.h>
void input_two_strings(char *a,char *b)
{
  printf("Enter two strings ");
  scanf("%s%s",a,b);
}

int stcmp(char *a,char *b)
{
  for (int i=0;20>i;i++)
  {
    if (a[i]>b[i])
    {
      return 1;
    }
    if (b[i]>a[i])
    {
      return 2;
    }
  }
  return 3;
}

void output(char *a,char *b,int result)
{
  if (result==1)
  {
    printf("%s is greater than %s",a,b);
  }
  if (result==2)
  {
    printf("%s is greater than %s",b,a);
  }
  if (result==3)
  {
    printf("Both are same");
  }
}

int main()
{
  char a[20],b[20],result;
  input_two_strings(a,b);
  result=stcmp(a,b);
  output(a,b,result);
  return 0;
}