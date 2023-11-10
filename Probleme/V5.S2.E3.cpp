#include<iostream>

using namespace std;

int main()

{
    char a[6][6];
    int i,j;
    for(i=0; i<6;i++)
        for(j=0;j<6;j++)
            {
                cin>>a[i][j];
            }
    for(i=0; i<6;i++)
        for(j=0;j<6;j++)
            {
                if(i<3)
                {
                         if(i=j)
                            {
                                a[i][j]=1;
                            }

                }
            }
      for(i=0; i<6;i++)
        for(j=0;j<6;j++)
            {
                cout<<a[i][j];
            }

    return 0;

}
