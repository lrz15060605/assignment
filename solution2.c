
#include<stdio.h>
int main()
{
int x=25;
 x=x%10;
printf("unit is %d",x);
return 0;
}



#include<stdio.h>
int main()
{
int x=2565;
 x=x/10;
printf("unit is %d",x);
return 0;
}




#include<stdio.h>
int main()
{
int x=2,y=4;
printf("x = %d and y = %d\n",x,y);
int c;
c=x;
x=y;
y=c;
printf("x = %d and y = %d",x,y);
return 0;
}






#include<stdio.h>
int main()
{
int y,x;
printf("enter the three digit number");
scanf("%d",&x);
y=x/10;
int a,b,c;
a=x%10;
b=y%10;
c=x/100;
printf("sum of three digits is %d",a+b+c);
return 0;

}








#include<stdio.h>
int main()
{
int x;
printf("enter the value");
scanf("%d",&x);
int y=x&(x%2);
printf("value is %d",y);
return 0;





#include<stdio.h>
int main()
{
int x;
int a,b;
printf("Enter the digit ");
scanf("%d",&x);
a=x/10;
b=x%10;
b=5*0;
printf("value is %d%d",a,b);

return 0;


}






#include<stdio.h>
int main()
{
 int r;
 printf("Enter the rupees = ");
 scanf("%d",&r);
float  d=76.26;

float v= 1/d*r;
printf(" Dollar = %f ",v);
return 0;
}























































