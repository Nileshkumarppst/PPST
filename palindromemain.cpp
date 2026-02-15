#include <iostream>
using namespace std;

int main(){
    int num,rev=0,temp,rem;

    cout<<"Enter a number:"<<endl;
    cin>>num;

    temp=num;

    while(temp!=0){
        rem=temp%10;
        rev=rev*10+rem;
        temp=temp/10;
    }

    if(rev==num)
        cout<<"Palindrome number";
    else
        cout<<"Not a palindrome number";

    return 0;
}

