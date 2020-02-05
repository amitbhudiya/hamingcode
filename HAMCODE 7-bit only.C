#include<stdio.h>
#include<conio.h>
void main()
{
int i,d,c1=0,c2=0,c3=0,p1=1,p2=1,p3=1;
int code[7];
clrscr();
printf("Enter the code: ");
for(i=0;i<7;i++)
{
scanf("%d",&code[i]);
}
i=0;
for(i=0;i<7;i++){
printf(" %d ",code[i]);
}
i=0;
for(i=1;i<8;i++)
{ if((i==1||i==3||i==5||i==7) && code[i]==1)
  {
   c1++;
  }
}
p1=parity(c1);

i=0;
for(i=1;i<8;i++)
{ if((i==2||i==3||i==6||i==7) && code[i]==1)
  {
   c2++;
  }
}
p2=parity(c2);


i=0;
for(i=1;i<8;i++)
{ if((i==1||i==2||i==3||i==4) && code[i]==1)
  {
   c3++;
  }
}
  
p3=parity(c3);

d=(p1*1)+(p2*2)+(p3*4);

printf("\nError at position %d\n",d);

if(code[7-d]==1)
{
  code[7-d]=0;
}
  else
  {
    code[7-d]=1;
  }
  printf("The corrected code is \n");
i=0;
for(i=0;i<7;i++)
{
printf(" %d ",code[i]);
}
getch();
}

int parity(x){
if(x%2==0)
return 0;
else
return 1;
}

