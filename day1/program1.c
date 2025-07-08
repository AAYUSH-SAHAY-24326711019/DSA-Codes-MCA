/*Program1
Date : 08-07-2025
Program to find the largest of 3 in c
*/

#include<stdio.h>
void main(){
    int a,b,c;
    printf("User give values of a,b,c in sequence: ");
    scanf("%d%d%d",&a,&b,&c);
    int key=1;
    while (key){
    if (a==b&&b==c) {
        printf("a,b,c all are equal");
        break;
    }
    if (a==0&b==0&c==0) {
        printf("All values are 0");
        break;
    }
    else{

    if(a>b){
        if(a>c){
            printf("No. a = %d is largest",a);
        }
        else{
            printf("No. c = %d is largest",c);
        }
    }
    else{
        if(b>c){
            printf("No. b = %d is largest",b);
        }
        else{
            printf("No. c = %d is largest",c);
        }
    }
        key = 0;
    }
    }
}