#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    int i=0;
    char x,a[25],b[25],c[50];
    cin.getline(a,25);
    cin.getline(b,25);
    strcpy(b+1,". ");
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]==' ')
        {
            strncpy(c,a,i);
            strcat(c," ");
            strcat(c,b);
            while(a[i]==' ')
            {
                i++;
            }
            strcat(c,a+i);
            i=strlen(a);
        }
    }
    cout<<endl<<c;


return 0;
}
