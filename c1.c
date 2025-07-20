// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int arr[]={10,22,32,55,6,9,88,92,12,36,63};
    int found=0;
    // do the linear searching
    int size = sizeof(arr)/sizeof(int);
    for(int i=0;i<size;i++){
        if(arr[i]==35){
            printf("Found at index %d",i);
            
        }
        else 
            found=0;
       
    }
    if(found==0){
        printf("Worst case element not found");
    }
    
}