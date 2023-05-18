// #include<stdio.h> 
// int main() 
// { 
// 	short a=10; //initializing variable of short data type 
// 	int b; //declaring int variable 'b'. 
// 	b=a; //Implicit type casting 
// 	printf("%d\n",a); 
// 	printf("%d\n",b); 
// } 

// code 2

// #include<stdio.h> 
// int main() 
// { 
// 	int a; 
// 	float b; 
// 	char c; 
// 	printf("Enter the value of a\n"); 
// 	scanf("%d",&a); 
// 	printf("A is %d\n", a); 
// 	printf("Enter the value of b\n"); 
// 	scanf("%f",&b ); 
// 	printf("B is %d\n", (int) b); 
// 	printf("Type any character : \n"); 
// 	scanf(" %c",&c ); 
// 	printf("Character is %d",(int) c); 
// 	return 0; 
// } 

// code 3

 #include <stdio.h>
int main()
{
	int a ,b ;
    float n;
    printf("Enter the value of a = ");
    scanf("%d",&a);
    printf("Enter the value of b = ");
    scanf("%d",&b);
    n = (float) a/b;
	printf("The Value of n is %d / %d = %f\n",a, b, n );
	return 0;

}

