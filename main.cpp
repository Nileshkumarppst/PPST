#include <iostream>

using namespace std;

int main(){
  cout<< "1. grade O"<<endl<<
    " 2. grade A+"<<endl<<
    " 3. grade A"<<endl<<
    " 4. grade B+"<<endl<<
    " 5. grade B"<<endl<<
    " 6. grade C+"<<endl<<
    " 7. grade F"<<endl;

    cout<<"ENTER YOUR GRADE "<<endl;
     char grade;
    cin>> grade;
    switch (grade)
    {
        case 'O' : cout << "students got marks between 90 to 100 "<<endl ;
        break;
        case 'A+' : cout << "students got marks between 80 to 90 "<<endl;
        break;
        case 'A' : cout << "students got marks between 70 to 80 "<<endl;
        break;
        case 'B+' : cout << "students got marks between 60 to 70 "<<endl;
        break;
        case 'B' : cout << "students got marks between 50 to 60 "<<endl;
        break;
        case 'C+' : cout << "students got marks between 40 to 50 "<<endl;
        break;
        case 'F' : cout << "students got marks less than 40"<<endl;
        break;

        default: cout<< "wrong choice "; }
        return 0;



    }
