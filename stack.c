#include<stdio.h>
#include<stdlib.h>

int top=-1;

int arr[5];

void push(){
    if(top==4){
        printf("\nStack is full.");
        return;
    }
    else{
        printf("\nEnter Data item");
        scanf("%d",&arr[++top]);
    }
}

void pop(){
    if(top==-1){
        printf("\nStack is empty.");
        return;
    }
    else{
        printf("\n    Popped element : %d",arr[top--]);
    }
}

void peep(){ int i=0;
    if(top==-1){
        printf("\nStack is empty.");
        return;
    }
    else{
        for(i=top;i>=0;i--){
            printf("%d\n",arr[i]);
        }
    }
}

void main(){
    int ch;
    while(1){
        printf("\n1.Push an element into stack");
        printf("\n2.Pop an element into stack");
        printf("\n3.Peep stack");
        printf("\n4.Exit");
        printf("\nUser , your choice :");
        scanf("%d",&ch);
        switch(ch){
            case 1: push(); break;
            case 2: pop(); break;
            case 3: peep(); break;
            case 4: exit(1);
            default: printf("invalid-input");
        }
    }
}
