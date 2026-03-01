#include <iostream>

using namespace std;

int main()
{
    int n,key;
    cout<<"enter the size of array=";
    cin>>n;
    int arr[n];

    cout<<"enter the elements=";
    for(int i=0;i<n;i++)
        cin>>arr[i];

    cout<<"enter the element that needs to be found=";
    cin>>key;

    int low=0,high=n-1,mid;

    while(low<=high){
       int mid=(low+high)/2;

        if(arr[mid]==key){
            cout<<"Found at index "<<mid;
            return 0;
        }
        else if(arr[mid]<key){
            low=mid+1;
            }

        else{
              high=mid-1;
              }
    }

    return 0;
}

