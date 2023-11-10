#include<iostream>

#include<string.h>

using namespace std;

int main()
{
    char s[256], *p, separator[]=",.";
    int k=0;
    cin.get(s,255);
    p=strtok(s,separator);
    while (p!=0)
        {
        cout<<p<<endl;k++;
        p=strtok(0, separator) ;
        }
    cout<<endl<<"nr cuvinte gasit"<<k;
    return 0;
}
