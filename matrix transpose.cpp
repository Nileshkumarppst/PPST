/*#include <iostream>

using namespace std;

int main()
{
    int r,c;
    cout<<"enter the no of rows and columns=";
    cin>>r>>c;

    int A[r][c];

    cout<<"enter the elements of A=";
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            cin>>A[i][j];

    for(int j=0;j<c;j++){
        for(int i=0;i<r;i++){
            cout<<"the transpose of the matrix is=";
            cout<<A[i][j]<<" ";
       }
}   cout<<endl;
}*/

#include <iostream>

using namespace std;

int main()
{
    int r,c;
    cout<<"enter the no of rows and columns=";
    cin>>r>>c;

    int A[r][c];

    cout<<"enter the elements of A=";
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            cin>>A[i][j];

    cout<<"the transpose of the matrix is="<<endl;

    for(int j=0;j<c;j++){
        for(int i=0;i<r;i++){
            cout<<A[i][j]<<" ";
       }
       cout<<endl;
    }

    return 0;
}
