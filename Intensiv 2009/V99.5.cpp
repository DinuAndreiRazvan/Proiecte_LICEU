#include<iostream>

using namespace std;

int main()
{
    int i,j,n,a[24][24];
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i>=j)
            {
                a[i][j]=i+1;
            }
            else
            {
                a[i][j]=j+1;
            }
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }

}
