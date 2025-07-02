/*
 *Date : 02-07-2025
 *Program to find the prime number
 *
 *Definition : Prime no. is a natural number , greater than 1,
 *has 2 factors only , 1 and itself
 *
 *Take input and state whether Prime or not
 */

#include<iostream>
using namespace std;

int main() {
    bool isPrime =true;
    int input;
    cout<<"User enter the value ->";cin>>input;

    if (input<0) {
        isPrime=false;
    }else {
        for (int i=2;i*i<=input;i++) {
            if (input%i==0) {
                isPrime=false;
                break;
            }
        }
    }
if (isPrime) {
    cout<<"\nInput is a prime number\n";
}
    else {
        cout<<"\nEntered number is not prime\n";
    }

    return 0;

}
/*
 * output
* User enter the value ->2
Input is a prime number
 */