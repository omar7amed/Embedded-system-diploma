/*
 * main.c
 *
 *  Created on: Aug 26, 2024
 *      Author: omar_
 */

////example 1
//#include "stdio.h"
//
//int main ()
//{
//	int x;
//
//	printf("enter integer you want to check :\n");
//	fflush(stdout);
//	scanf("%d",&x);
//
//	if(x%2==0)
//	{
//		printf("number %d is even",x);
//	}
//		else{
//		printf("number %d is odd",x);
//	}
//
//}


//example 2

//#include "stdio.h"
//
//int main()
//{
//
//	char x;
//	printf("enter an alphabet : ");
//	fflush(stdout);
//	scanf("%c",&x);
//
//	if(x=='i'||x=='o'||x=='e'||x=='a')
//		printf("alphabet %c is vowel",x);
//	else
//		printf("alphabet %c is consonant ",x);
//}

//example 3
//
//#include "stdio.h"
//
//int main()
//{
//	float x,y,z;
//	printf("enter three numbers\n");
//	fflush(stdout);
//	scanf("%f %f %f",&x,&y,&z);
//	if(x>y)
//	{
//
//	 if (x>z)
//		printf("largest number = %f",x);
//	 else
//		 printf("largest number = %f ",z);
//	}
//	 else
//	 {
//		if(y>z)
//
//		printf("largest number = %f",y);
//		else
//			printf("largest number = %f",z);
//	}
//
//
//}

//example 4

//#include"stdio.h"
//
//int main()
//{
//	float x;
//	printf("enter a number : ");
//	fflush(stdout);
//	scanf("%f",&x);
//
//	if(x>=0)
//	{
//		if (x==0)
//
//			printf("you entered a 0");
//		else
//			printf("%f is positive ",x);
//	}
//		else
//
//			printf("%f is negative ",x);
//
//
//}

//example 5

//#include"stdio.h"
//
//int main()
//{
//	char x;
//	printf("enter a character :");
//	fflush(stdout);
//	scanf("%c",&x);
//
//	if(x >= 'a'&&x<='z')
//
//		printf("%c is  an alphabet ",x);
//	else
//		printf("%c is not an alphabet",x);
//}


//exmaple 6

//#include "stdio.h"
//
//int main ()
//{
//	int sum=0 ;
//	int x;
//	printf("enter an integer :");
//	fflush(stdout);
//	scanf("%d",&x);
//
//	for(int y=0;y<=x;y++)
//	{
//
//		sum +=y;
//	}
//
//	printf("sum = %d",sum);
//
//}

//example 7

//#include "stdio.h"
//
//int main ()
//{
//
//	unsigned long long int fact=1;
//	int x;
//	printf("enter an integer :");
//	fflush(stdout);
//	scanf("%d",&x);
//	if(x<=0)
//
//		printf("negative or 0 number");
//	else
//
//	for (int y=1;y<=x;++y)
//	{
//		fact*=y;
//
//	}
//
//	printf("factorial of number %d = %d",x,fact);
//}

//example 8

//#include "stdio.h"
//
//int main ()
//{
//	float y,z;
//	char x;
//	printf ("enter an operator : ");
//	fflush(stdout);
//	scanf("%c",&x);
//	printf("enter two operands : ");
//	fflush (stdout);
//	scanf("%f  %f",&y,&z);
//
//	switch(x)
//	{
//	case'+':
//		printf("%.1f  %c  %.1f = %.1f",y,x,z,y+z);
//		break;
//	case'*':
//		printf("%.1f  %c  %.1f = %.1f",y,x,z,y*z);
//		break;
//	case '-':
//		printf("%.1f  %c  %.1f = %.1f",y,x,z,y-z);
//		break;
//	case '/':
//		printf("%.1f  %c  %.1f = %.1f",y,x,z,y/z);
//		break;
//
//
//	}
//
//}

