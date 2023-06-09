#include <stdio.h>
#include <stdlib.h>

int *functionDangling()
{
    int a, b, sum;
    a = 34;
    b = 364;
    sum = a + b;
    return ∑
}

int main()
{
    // **** we avoid dangling pointer because it creates bug in our code so should assing to NULL pointer  ***** 
    // Case 1: De allocation of a memory block
    int *ptr = (int *)malloc(7 * sizeof(int));
    ptr[0] = 34;
    ptr[1] = 36;
    ptr[2] = 64;
    ptr[3] = 5;
    free(ptr); // ptr is now a dangling pointer

    // Case 2: Function returning local variable address
    int *dangPtr = functionDangling(); // dangPtr is now a dangling pointer

    int *danglingPtr3;
    // Case 3: If a variable goes out of scope
    {
        int a = 12;

        danglingPtr3 = &a;
    }
    // Here variable a goes out of scope which means danglingPtr3 is pointing to a location 
    // which is freed and hence danglingPtr3 is now a dangling pointer

    // To avoid this kind of problem we have to assign dangling pointer to null poinetr 
    ptr = NULL;
    dangPtr = NULL;
    danglingPtr3 = NULL;

    return 0;
}
