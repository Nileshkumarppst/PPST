#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void findLength(string s)
{
    cout << "Length of string = " << s.length() << endl;
}

void concatenate(string s1)
{
    string s2;
    cout << "Enter second string: ";
    getline(cin, s2);

    cout << "Concatenated string = " << s1 + s2 << endl;
}

void reverseString(string s)
{
    reverse(s.begin(), s.end());
    cout << "Reversed string = " << s << endl;
}

void traverse(string s)
{
    cout << "Characters in string: ";
    for(char c : s)
        cout << c << " ";
    cout << endl;
}

void substring(string s)
{
    int pos, len;

    cout << "Enter starting position: ";
    cin >> pos;

    cout << "Enter length: ";
    cin >> len;

    cout << "Substring = " << s.substr(pos, len) << endl;
}

int main()
{
    string s1;
    int choice;

    cout << "Enter a string: ";
    getline(cin, s1);

    cout << "\n----- STRING MENU -----\n";
    cout << "1. Length of String\n";
    cout << "2. Concatenate Strings\n";
    cout << "3. Reverse String\n";
    cout << "4. Traverse String\n";
    cout << "5. Substring\n";

    cout << "Enter your choice: ";
    cin >> choice;
    cin.ignore();

    switch(choice)
    {
        case 1: findLength(s1); break;
        case 2: concatenate(s1); break;
        case 3: reverseString(s1); break;
        case 4: traverse(s1); break;
        case 5: substring(s1); break;
        default: cout << "Invalid choice";
    }

    return 0;
}



