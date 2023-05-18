/* You have to give prize to kids 
 Math + Science = 45
 Math = 15
 Science = 15
*/

#include<stdio.h>
void main()
{
    int r;
    printf("\nIf you passed math exam press 1\nIf you passed science exam press 2\nIf you passed both exam press 3\n");
    scanf("%d", &r);
    if(r==1)
    printf("You get 15 rupess prize for passing math exam \n");
    else if(r==2)
    printf("You get 15 rupess prize for passing science exam \n");
    else 
    printf("You get 45 rupess prize for passing both exams \n");
}