#include <iostream>
using namespace std;
int main() {
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    if (a == 0) {
        cout<<"The number is exactly 0."<<endl;
    }
    else if (a > 0) {
        cout<<"The number is positive."<<endl;
    }
    else {
        cout<<("The number is negative.")<<endl;
    }
     return 0;
}