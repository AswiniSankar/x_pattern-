
/*

* # # # * 
  * # * $ 
    * $ $ 
  * @ * $ 
* @ @ @ * 


*/

#include<stdio.h>
int main()
{
 int n,i,j,c,k;
 char a[100][100];
 scanf("%d",&n);
 for(i=0;i<n;i++)
  for(j=0;j<n;j++)
    a[i][j]='$';
 for(i=0;i<n;i++)
  a[i][i]='*';
 for(i=0,j=n-1;i<n;i++,j--)
  a[i][j]='*';
 c=0;
 k=n;
 for(i=0;i<(n-1)/2;i++)
 {
  c=c+1;
  k=k-2;
   for(j=c;j<k+c;j++)
       a[i][j]='#';
 }
 c=0;
 k=n;
 for(i=0;i<(n-1)/2;i++)
 {
  c=c+1;
  k=k-2;
   for(j=c;j<k+c;j++)
       a[j][i]=' ';
 }
 c=0;
 k=n;
 for(i=n-1;i>(n-1)/2;i--)
 {
  c=c+1;
  k=k-2;
   for(j=c;j<k+c;j++)
       a[i][j]='@';
 }
 for(i=0;i<n;i++)
{
 printf("\n");
 for(j=0;j<n;j++)
 printf("%c ",a[i][j]);
 
}
printf("\n");
return 0;
}
 
