#include<stdio.h>
#include<conio.h>

void main(){
    int a =10;
    int * jrPointer = NULL;
    jrPointer=&a;
    printf("Value %d (location)\n %d (value)",jrPointer,*jrPointer);
    int **srPointer = &jrPointer;
    printf("\nValue in sr Pointer : %d",**srPointer);
    getch();

}
/*PS C:\Users\Dell\Desktop\dsa c> gcc pointer.c -o pointer.exe
PS C:\Users\Dell\Desktop\dsa c> ./pointer.exe
Value 6422296 (location)
 10 (value)
Value in sr Pointer : 6422296
PS C:\Users\Dell\Desktop\dsa c> gcc pointer.c -o pointer.exe
PS C:\Users\Dell\Desktop\dsa c> ./pointer.exe      
Value 6422296 (location)
 10 (value)
Value in sr Pointer : 10*/