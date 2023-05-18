// 1. Without arguments and without return value ://No Argument and No Return Value 
void Star_pattern() 
{ 
	int a; 
	printf("Enter how many stars(*) you want : \n"); /* In this both declaration and definition of function are done together.*/ 
	scanf("%d", &a ); 
	for (int i = 0; i<a; i++) 
	{
		printf("*"); 
	} 
} 
 
// 2. Without arguments and with return value : 
// Without arguments and with return value :
int Sum(); /* Declaration of Function */

 /*Other Code*/ 
int Sum() 
{ 

	int x,y,z; 
	printf("Enter no. 1 : \t"); 
	scanf("%d",&x); 
	printf("\nEnter no. 2 : \t"); 
	scanf("%d",&y ); 
	z=x+y; 
	return z; 
} 

// 3. With arguments and without return value : 

//No Argument and No Return Value 
void Star_pattern() 
{ 
	int a; 
	printf("Enter how many stars(*) you want : \n"); /* In this both declaration and definition of function are done together.*/ 
	scanf("%d", &a ); 
	for (int i = 0; i<a; i++) 
	{
		printf("*"); 
	} 
} 

// 4. With arguments and with return value : 

// With arguments and with return value : 
float Percentage(int x,int y); // Declaration of Function 
/*Code*/
int x; 
x = Percentage(80,95); // Calling Function 
 /*Code*/ 
float Percentage(int x,int y) 
{ 
	float perct; 
	perct = ((x+y)/200.0)*100.0; // Definition of Function 
	return perct; 
} 


 
