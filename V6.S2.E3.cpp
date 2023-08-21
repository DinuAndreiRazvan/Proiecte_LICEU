#include<iostream>

using namespace std;

int main()

{
    char a[4][5];
    int i,j;
    for(i=0;i<4;i++)
        for(j=0;j<5;j++)
            {
                cin>>a[i][j];
            }
    for(i=3;i>=0;i--)
        for(j=0;j<5;j++)
            {
                a[i][j]++;
            }
     for(i=0;i<4;i++)
        for(j=0;j<5;j++)
            {
               cout<<a[i][j]<<' ';
               cout<<endl;
            }

    return 0;

}
