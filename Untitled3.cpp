/*
	Student Name: Sanjay Adhikari
	Subject: Programming Fundamentl
	Roll  no: 32
	Labsheet: 14
	Program: WAP to check number is divisible by 5 or 11 or not
	*/
	
 	#include<stdio.h>
 	#include<conio.h>
	 
	 int main()
	 {
	 int n;
	 	
	 	printf("enter fitst number\n");
	 	scanf("%d",&n);
	 	
	 	if(n%5==0 && n%11==0){
		 printf("Number is divisible by 5 & 11");
		 }
		 
		 else
		 {
		 
		 printf("Number is not divisible by 5 &11");
		}
	 	getch();
	 	return 0;
		  } 	
