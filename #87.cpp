#include <iostream>
#include <string.h>
//#include <fstream>

using namespace std;
//ifstream fin("lgmax.in");
//ofstream fout("lgmax.out");

int main()
{
    char s[256],t[256];
    int i,n,maxk=0,k=0;
    cin.get(s,255);

    while(s==0)
    {
        n=strlen(s);
             for(i = 0 ; i < n ; i++)
        {
            k=k++;
            cout<<k;
        }

        if(k>10000)
        {
            maxk=k;
            cout<<s;
        }
         cin.get(s,255);
         k=0;
    }


    return 0;
}
