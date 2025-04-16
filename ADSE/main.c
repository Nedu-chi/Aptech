#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
//     int a=-10;
//     int b=85;
//     unsigned int sum=(a+b);
//     unsigned int num= 40000000;
//     printf("the sum is %d\n",sum);
//     printf("its over %u\n ",num);

    
// }

//     float c=0.15;
//     double d= 9.43935;
//     double e=(c*d);
//     printf("the multiplication is %f\n",e);

// }


//  char initial= 'C';
//  printf("whats the first letter of Chinedum ? %d \n", initial);
// }


//  //Boolen
//  bool isRaining= true;
//  int hasUmbrella= 0;
//  if (isRaining && hasUmbrella)//&& = and
//  {
//     printf("you will get wet\n");
//  } else{
//     printf("your fine\n");
//  }

// int* ptr = NULL;
// ptr-(int*)malloc(sizeof(int));
// if (ptr =NULL){
//     *ptr=42;
//     printf("the value is %d\n",*ptr);
//     free(ptr);
// } else{
//     printf("Memory not allocated\n");
// }

// return 0;

//CLASSWORK
// char* charPtr = NULL;
// charPtr = (char*)malloc(10 * sizeof(char));
// if (charPtr != NULL) {
//     strcpy(charPtr, "Test");
//     printf("The string is: %s\n", charPtr);
//     free(charPtr);
// } else {
//     printf("Memory not allocated\n");
// }
// return 0;


//working with scanf
// int age;
// printf("how old are you ?");

// scanf("%d",&age);

// if (age >= 18) {
//     printf("you are an adult\n");
//     if (age >= 65) {
//         printf("you are a senior citizen\n");
//     }
// } else {mn 
//     printf("you are a kid \n");
//        printf("you are %d years old\n", age);
// }
// }


//quadratic equation

double a,b,c,solu1,solu2;
printf("enter the coefficients of x^2\n");
scanf("%lf",&a);

printf("enter the coefficients of x:\n");
scanf("%lf",&b);


printf("enter the Constant Term: \n");
scanf("%lf",&c);

printf("the params are: a=%lf,b=%lf,c=%lf,\n",a,b,c);

double discriminant=(b*b)-(4*a*c); 

if (discriminant > 0) {
    solu1 = (-b + sqrt(discriminant)) / (2 * a);
    solu2 = (-b - sqrt(discriminant)) / (2 * a);
    printf("The roots are real and distinct: %.2lf and %.2lf\n", solu1, solu2);
} else if (discriminant == 0) {
    solu1 = -b / (2 * a);
    printf("The roots are real and equal: %.2lf\n", solu1);
} else {
    double realPart = -b / (2 * a);
    double imagPart = sqrt(-discriminant) / (2 * a);
    printf("The roots are complex and imaginary: %.2lf + %.2lfi and %.2lf - %.2lfi\n", realPart, imagPart, realPart, imagPart);
}

return 0;
}









 
             