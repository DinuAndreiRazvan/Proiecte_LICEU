#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main()
{
    char v[100];
    int i;
    cin.get(v,100);
    for(i = 0; i < strlen(v); i++)
    {
        if(v[i]=='-')
        {
            while(v[i]!=' ')
            {
                strcpy(v+i,v+i+1);
                cout<<v<<"\n";
            }
        }
    }

    cout<<"\n";
    cout<<v;
    return 0;
}
