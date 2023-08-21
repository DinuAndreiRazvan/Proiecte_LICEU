#include<iostream>
#include<string.h>
#include<fstream>

using namespace std;
ifstream fin("sterge.in");


int main()
{
    char s[101], *p;
    cin.getline(s,100);
    p=strtok(s," ");

    cout<<p;



    return 0;
}


