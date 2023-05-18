// #include<stdio.h>
// void main()
// {
//     int a;
//     char b;
//     printf("Press 1 to continue the game = \n");
//     scanf("%d",&a);
//     printf("Enter your name = \n");
//     scanf("%d",&b);
//     while (a==1)
//     {
//         /* code */
//         printf("%c you can play the game",b);
//         if(b=="xxx")
//         {
//             printf("Sorry %c you can not play the game",b);
//             break;

//         }
//     break;
//     }
// }


// #include <stdio.h>
// void star(int n)
// {
//     int f, i;
//     printf("Enter how many star you want to print = \n");
//     scanf("%c",&f);
//     for (i=0 ; i<f ; i++)
//     {
//         printf("%c",'*');
//     }
// }
// void main()
// {
//     int f;
//     star(f);
// }

// #include <stdio.h>

// int main()
// {

//     int arr[50], num, x, y, temp;    

//     printf("Please Enter the Number of Elements you want in the array: \n");

//     scanf("%d", &num);    

//     printf("Please Enter the Value of Elements: \n");

//     for(x = 0; x < num; x++)

//         scanf("%d", &arr[x]);

//     for(x = 0; x < num - 1; x++){       

//         for(y = 0; y < num - x - 1; y++){          

//             if(arr[y] > arr[y + 1]){               

//                 temp = arr[y];

//                 arr[y] = arr[y + 1];

//                 arr[y + 1] = temp;

//             }

//         }

//     }

//     printf("Array after implementing bubble sort: \t");

//     for(x = 0; x < num; x++){

//         printf("%d  ", arr[x]);

//     }

//     return 0;

// }


