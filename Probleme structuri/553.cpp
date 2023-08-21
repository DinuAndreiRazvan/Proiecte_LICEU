/*
3
Romania
3
albastru
galben
rosu
Spania
2
rosu
galben
Grecia
2
albastru
alb
galben
*/
#include<iostream>
#include<string.h>

using namespace std;

struct tara
{
    char d[40];
    int nr_culori;
    char c[5][20];
};
tara a[100];

int main()
{
    int n,i,j=0,k,l;
    char s[20];
    cin>>n;
    cin.get();
    for(i=0;i<n;i++)
    {
        cin.getline(a[i].d,40);
        cin>>a[i].nr_culori;
        cin.get();
        for(j=0;j<a[i].nr_culori;j++)
        {
            cin.getline(a[i].c[j],20);
        }
    }
    cin.getline(s,20);

    for(i=0;i<n;i++)
    {
        for(j=0;j<a[i].nr_culori;j++)
        {
                if(strcmp(a[i].c[j],s)==0)
            {
                cout<<endl<<a[i].d;
            }
        }
    }
    cout<<endl;

    return 0;
}
