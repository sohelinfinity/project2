#include<stdio.h>
#include<conio.h>
#include<string.h>
struct bb
{ char name[20];
  float n1;
  }
main()
{ struct bb b[20];
float a[20],n,k,m,j,i;
double l;
clrscr();
printf("enter your limit\n");
scanf("%f",&k);
for(i=1;i<=k;i++)
{   printf("enter name\n");
scanf("%s",&b[i].name);
printf("enter number\n");
  scanf("%f",&b[i].n1);
  a[i]=(b[i].n1*(b[i].n1-1));
 n=n+b[i].n1;
 m=m+a[i];        }
 printf("the table is\n\n");
 printf("Name\t\t n\t \t N\n");
 for(i=1;i<=k;i++)
  {
   printf("%s\t \t%f\t%f\n",b[i].name,b[i].n1,a[i]);

}
printf("\n\nthe answer is\n\n");
 j=n*(n-1);
 l=(m/j);
 if(l<=0)
  {  printf("the diversity is infinite\n");}
  else if(l>=1)
  {printf("here no diversity\n");}
  else {
 printf("the index of diversity is %lf\n",1-l);
 printf("the reciprocal index is %lf\n",1/l);
if((1-l)>=.85)
 printf("divesity is outstanding\n");
  else if((1-l)>=.70)
 printf("divesity is  very good\n");
else if((1-l)>=.60)
 printf("divesity is  good\n");
else if((1-l)>=.50)
 printf("divesity is  average\n");
else if((1-l)>=.40)
 printf("divesity is  poor\n");
else  if((1-l)>=.30)
 printf("divesity is  very poor\n");
else if((1-l)<.30)
 printf("divesity is need for resurve \n");}
 getch();}
