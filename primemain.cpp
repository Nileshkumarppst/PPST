#include <iostream>
using namespace std;

int main() {
    int num;

    cout<<"Enter a number:"<<endl;
    cin>>num;

    if(num<=1){
        cout <<"Not a prime number";
    } else {
        int i;
        for (i=2;i<num;i++){
            if (num%i==0) {
                break;
            }
        }

        if (i==num)
            cout<<"Prime number";
        else
            cout<<"Not a prime number";
    }

    return 0;
}

