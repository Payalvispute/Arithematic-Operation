#include<stdio.h>
#include<conio.h>

void main()
{
        
int a, b, c;
float output;
clrscr();


void addition(int a, int b)
{
// revati
c= a+b;
printf("%d", c);

}

void subtract(int a, int b)
{
    // mayur
c = a-b;
printf("%d", c);

}

void muliply(int a, int b)
{
   // Payal
c=a*b;
printf("%d",c);

}

void division(int a, int b)
{


}

printf("Enter First Number: ");
scanf("%d", &a);

printf("Enter Second Number: ");
scanf("%d", &b);

printf("Select The Operations :\nEnter 1 For Addition\nEnter 2 For Subtraction\nEnter 3 For Multiplication\nEnter 4 For Division");
scanf("%d", &c);

switch(c)
{

case 1:
addition(a,b);
break;

case 2:
subtract(a,b);
break;

case 3:
multiply(a,b);
break;

case 4:
division(a,b);
break;

default:
printf("You have entered invalid input. The program will close. ")
}

getch();
}