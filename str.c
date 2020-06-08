/*
ip::9

op::
 1       4
   5   8  
     9    
   7   6  
 3       2
*/
#include<stdio.h>
int main()
{
  int n,i,j,t1=1,t2=4,t3,t4;
  scanf("%d",&n);
  t3=n-2;
  t4=t3-1;
  n=(n+1)/2;
  for(i=0;i<n;i++)
  {for(j=0;j<n;j++)
   {
     if(i==j && i<=(n-1)/2)
     {printf("%2d",t1);
      t1+=4;
     }
      else if((i+j)==n-1 && i<(n-1)/2)
     {printf("%2d",t2);
      t2+=4;
     }
    else if(i>(n-1)/2 && (i+j)==n-1)
    {
      printf("%2d",t3);
      t3-=4;
     }
    else if(i>(n-1)/2 && i==j)
    {
      printf("%2d",t4);
      t4-=4;
     }
    else
     printf("  ");
   } 
  printf("\n");
  }
  printf("\n");
  return 0;
}
