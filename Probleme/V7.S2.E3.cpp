#include<iostream>
#include <string.h>

using namespace std;

int main()

{
    int i,j,m,n,a[100][100];
    cin>>n>>m;
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            {
                cin>>a[i][j];
            }
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            {

            }
     for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            {
               cout<<a[i][j]<<' ';
               cout<<endl;
            }

    return 0;

}
