#include <iostream>

using namespace std;

int main()
{
    int r,c;
    cout<<"enter no of rows and columns=";
    cin>>r>>c;

    int A[r][c], B[r][c],sum[r][c];

    cout<<"enter elements of A:";
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            cin>>A[i][j];

    cout<<"enter elements of B:";
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            cin>>B[i][j];

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            sum[i][j]=A[i][j]+B[i][j];
       }
    }
    cout<<"sum of matrix is=";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<sum[i][j]<<" ";

        }
    }    cout<<endl;
    return 0;
}

