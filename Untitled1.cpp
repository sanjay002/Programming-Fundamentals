/*
	Student Name: Sanjay Adhikari
	Subject: Programming Fundamentl
	Roll  no: 32
	Labsheet: 12
	Program: WAP to swap two number using temporary variables
	*/
	
#include<stdio.h>
#include<conio.h>
 int main()
 
 {
int a,b,temp;
 printf("Enter first number\n");
 scanf("%d",&a);
 printf("Enter second number\n");
 scanf("%d",&b);
 printf("before swap = %d %d \n",a,b);
 temp=a;
 a=b;
 b=temp;
 printf("after swap = %d %d \n",a,b);
 getch();
 return 0;
  
 
 }
	
