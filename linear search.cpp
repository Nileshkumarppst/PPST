#include <iostream>

using namespace std;

int main()
{
    int n, key, found = 0;
    cout<<"enter the size of array=";
    cin >> n;
    int arr[n];

    cout<<"enter the elements=";
    for(int i=0;i<n;i++)
        cin >> arr[i];

    cout<<"element that needs to be found=";
    cin >> key;

    for(int i=0;i<n;i++){
        if(arr[i]==key){
            cout<<"Found at index "<<i;
            found=1;
            break;
        }
    }

    if(!found) cout<<"Not Found";
}
