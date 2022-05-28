//Documentation Section
/*Liyana Athirah, 8/11/2021, Descrip: Exercise 3.6 | To calculate area of rectangle, write a program where the 
user can input any value for the width and length. Display the inserted value (consider width and length is a float)*/

//Pre-processor Section
#include<stdio.h>

//Global Variable Section


//Main function section
int main(){

    float WIDTH;
    float LENGTH;
    float area;
    
    printf("Enter width:");
    scanf("%f", &WIDTH);

    printf("Enter length:");
    scanf("%f", &LENGTH);

    area = LENGTH * WIDTH;

    printf("area of rectangle = %.2f", area);
    return 0;

}

//User-defined Section
