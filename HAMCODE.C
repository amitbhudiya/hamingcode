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
printf("\n%d",c1);
p1=parity(c1);

i=0;
for(i=1;i<8;i++)
{ if((i==2||i==3||i==6||i==7) && code[i]==1)
  {
   c2++;
  }
}
printf("\n%d",c2);
p2=parity(c2);


i=0;
for(i=1;i<8;i++)
{ if((i==1||i==2||i==3||i==4) && code[i]==1)
  {
   c3++;
  }
}
printf("\n%d",c3);
p3=parity(c3);

d=(p1*1)+(p2*2)+(p3*4);

printf("\nError at position %d\n",d);

if(d==7)
  {
   if(code[1]==1)
    {code[1]=0;}
  else
   {code[1]=1;}
  }

if(d==6)
  {
   if(code[2]==1)
  {
   code[2]=0;
   }
   else{
     code[2]=1;
  }
  }


if(d==5)
{
 if(code[3]==1)
 {
code[3]=0;
}
else{
code[3]=1;
}
}

if(d==4)
{
if(code[4]==1)
{
code[4]=0;
}
else{
code[4]=1;
}
}


if(d==3)
{
if(code[5]==1)
{
code[5]=0;
}
else{
code[5]=1;
}
}


if(d==2)
{
if(code[6]==1)
{
code[6]=0;
}
else{
code[6]=1;
}
}


if(d==1)
{
if(code[7]==1)
{
code[7]=0;
}
else{
code[7]=1;
}
}

i=0;
for(i=1;i<8;i++){
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

