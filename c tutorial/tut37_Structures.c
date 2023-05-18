#include<stdio.h>
#include<string.h>
struct student
{
    char name[30];
    int id;
    float marks;
};

int main()
{
    struct student s1,s2,s3;
    printf("Enter the name of the student\n");
    gets(s1.name);
    printf("Enter the student id\n");
    scanf("%d",&s1.id);
    printf("Enter the marks\n");
    scanf("%f",&s1.marks);
    printf("Enter the name of the student\n");
    getchar();
    gets(s2.name);
    printf("Enter the student id\n");
    scanf("%d",&s2.id);
    printf("Enter the marks\n");
    scanf("%f",&s2.marks);
    printf("Enter the name of the student\n");
    getchar();
    gets(s3.name);
    printf("Enter the student id\n");
    scanf("%d",&s3.id);
    printf("Enter the marks\n");
    scanf("%f",&s3.marks);
    printf("\n\n"); 
    printf("******Student list for your school*******\n");
    printf("\n\n");
    printf("Name of the student \n");
    puts(s1.name);
    printf("ID of the student :  %d\n",s1.id);
    printf("The student get %0.2f marks\n\n",s1.marks);
    printf("Name of the student \n");
    puts(s2.name);
    printf("ID of the student :  %d\n",s2.id);
    printf("The student get %0.2f marks\n\n",s2.marks);
    printf("Name of the student \n");
    puts(s3.name);
    printf("ID of the student :  %d\n",s3.id);
    printf("The student get %0.2f marks\n\n",s3.marks);
    return 0;
}