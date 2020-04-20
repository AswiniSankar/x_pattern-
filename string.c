#include<stdio.h>
#include<string.h>
int main()
{
  char a[100];
  int n,c=0,i,x=0,j;
  printf("enter the string\n");
  gets(a);
  n=strlen(a);
  for(i=0;i<strlen(a);i++)
  {for(j=0;j<strlen(a);j++)
    {if(j==i ||(i+j)==n-1)
     {
       printf("%c",a[j]);
     }
    else
      printf(" ");
    }
    printf("\n");
   }
  return 0;
}
