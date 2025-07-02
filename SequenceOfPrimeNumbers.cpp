#include<iostream>
using namespace std;

int main() {

    int n; cout<<"user Enter the Value to Generate the sequence:";cin>>n;
    for (int num=2; num<=n; num++) {
        bool isPrime=true;
        for (int i=2;i*i<=num;i++) {
            if (num%i==0) {
                isPrime=false;
                break;
            }
        }
        if (isPrime) {
            cout<<num<<" ";
        }
    }
    return 0;
}
/*output
 *
* user Enter the Value to Generate the sequence:21
2 3 5 7 11 13 17 19
 */