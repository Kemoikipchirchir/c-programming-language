//progrma to calculate volume of a sphere 
//Program to calculate the volume of a sphere
author=Edwin kipchirchir
date=02/7/2022
description=functions

#include <stdio.h>
#include<math.h>
//function prototype
double calculatespherevolume(double radius);
int main() {
//declaration
double radius,volume;

//prompt the user to enter the radius
printf("enter the radius of sphere:");
scanf("%lf",&radius);

volume=calculatespherevolume(radius);

printf("volume of the sphere with radius %.2f is: %.2f cubic units \n",radius,volume);
    return 0;
}
//function definition
double calculatespherevolume(double radius){
//v=(4/3)*(PI)*r^3;
double PI =3.141592653589;
double volume =(4/3)*PI*radius*radius*radius;
return volume;
}v
