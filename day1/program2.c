//Program2
// Created by Dell on 7/8/2025.
//program to find the product of 2 linear expressions
//(ax+b)(cx+d)=(ac)x^2 + (ad+bc)x + cd;
//
#include<stdio.h>
void main() {
    char str[40] = "(ax+b)(cx+d)=(ac)x^2 + (ad+bc)x + cd;";
    printf("user see the given string :%s\n",str);
    float a , b, c,d;
    printf("Now enter a and b in sequence ->");
    scanf("%f%f",&a,&b);
    printf("\nNow enter c and d in sequence ->");
    scanf("%f%f",&c,&d);
    printf("\noutput : (%f)x^2 + (%f)x + %f",(a*c),(a*d+b*c),(c*d));


}
