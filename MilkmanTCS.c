#include<stdio.h>
#include<conio.h>
void main()
{
 int i,j,r,nb,q,n;
 clrscr();
 printf("no of tests : ");
 scanf("%d",&n);//no of test cases
 for(i=0;i<n;i++)
 {
  printf("quantity of milk =");
  scanf("%d",&q);
  nb=0;
  r=q%10;
  if(q>=10)
  {
   if(r==2||r==9||r==3||r==4)
   {
    j=q/10;
    nb=nb+j-1;
    q=q%10+10;
   }
   else
   {
    j=q/10;
    nb=nb+j;
    q=q-(j*10);
   }
   }
  if(q>=7)
  {
   j=q/7;
   nb=nb+j;
   q=q%7;
  }
  if(q>=5)
  {
   j=q/5;
   nb=nb+j;
   q=q%5;
  }
  nb=nb+q;
  printf("minimum no of bottles = %d\n",nb);
 }
 getch();
}
