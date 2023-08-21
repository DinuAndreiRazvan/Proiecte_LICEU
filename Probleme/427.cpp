/*
3
1 3 4
5 6 3
9 3 5
*/
#include<iostream>
#include<fstream>

using namespace std;
ifstream fin ("427.in");

int main()
{
    int s[50][50],n,i,j,k1=0,k2=0,p=0,c=0;
    fin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            fin>>s[i][j];
            if(i+j+1<n)
            {
                c++;
                p=p+s[i][j]%2;
            }

            if(i>j)
            {
                if(s[i][j]<0)
                    k1++;
                else
                    k2++;
            }
        }
    }

    if(p==c || p==0)
    {
        cout<<"Au aceeasi paritate"<<p<<endl;
    }
    else
    {
        cout<<"Nu au aceeasi paritate"<<endl;
    }
    if(k1==0 || k2==0)
    {
        cout<<"Au acelasi semn"<<endl;
    }
    else
    {
        cout<<"Nu au acelasi semn"<<endl;
    }

    return 0;
}
