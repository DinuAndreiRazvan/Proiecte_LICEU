#include <iostream>
#include <string.h>
#include <fstream>

using namespace std;
ifstream fin("capslock.in");
ofstream fout("capslock.out");

int main()
{
    char s[256];
    int i,n,k=-1;
    fin.get(s,255);
    n=strlen(s);
    for(i=0;i<n;i++)
    {
        if(s[i]=='#')
        {
            k=k*(-1);
            strcpy(s+i,s+i+1);
            i=i-1;
        }
        else
        {
            if(s[i]>='a' && s[i]<='z')
            {
                if(k==1)
                {
                    s[i]=s[i]-32;
                }
            }
        }

    }
    fout<<s;
    return 0;
}
