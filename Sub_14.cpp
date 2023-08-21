#include<iostream>
#include<string.h>
#include<fstream>

using namespace std;
ifstream fin("atestat.in");
ofstream fout("atestat.out");
int nrlit(char s[100])
{
    int i,k=0;
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]<='Z' && s[i]>='A')
        {
            k++;
        }
    }
    return k;
}
void trans(char s[100])
{
    int i;
    for(i=0;i<strlen(s);i++)
    {
        if(i==0)
        {
            if(i>'Z')
            {
                s[i]=s[i]-32;
            }
        }
        else
        {
          if(s[i]<='Z')
          {
              s[i]=s[i]+32;
          }
        }
    }
}


int main()
{
    char s[100];
    int n,p=0;
    fin>>n;
    fin.get();
    while(n!=0)
    {
       fin.getline(s,100);
       p=p+nrlit(s);
       trans(s);
       fout<<s<<" ";
       n--;
    }
    fout<<"\n"<<p;

    return 0;
}
