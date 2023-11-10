#include<iostream>
#include<fstream>
#include<string.h>

using namespace std;
ifstream fin("V8.S3.E3.in");

int main()

{
    int a,b,i=0,k=0,j=0;
    char v[256],s[256], separator[]=" ";
    char *p;
    fin.getline(v,255);
    cout<<v<<endl;
    p=strtok(v,separator);
    while (p!=0)
        {
        k++;
        cout<<p<<endl;
        p=strtok(0, separator) ;
        }

        cout<<k<<endl<<s;


    return 0;
}
