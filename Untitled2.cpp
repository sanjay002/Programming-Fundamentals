/*
	Student Name: Sanjay Adhikari
	Subject: Programming Fundamentl
	Roll  no: 32
	Labsheet: 13
	Program: WAP to swap two number without using temporary variables
	*/

 #include<stdio.h>
 #include<conio.h>
 int main ()
 {
 	int a,b;
	 printf("Enter first number\n");
	 scanf("%d",&a)	;
	 printf("Enter second number\n");
	 scanf("%d",&b)	;
	  printf("before swap = %d %d \n",a,b);
	  a=a-b;
	  b=a+b;
	  a=b-a;
	  printf("after swap = %d %d \n",a,b);
	
	 getch();
	 return 0; 	
 	
 }
