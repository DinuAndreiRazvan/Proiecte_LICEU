
#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int i, cnt = 0;
    char v[256], b[]="aeiou";

    cin.get(v, 255);
    for(i = 0; i < strlen(v); i++)
    {
        if(v[i+1] != NULL && v[i+1] != ' ')
        {
            if(strchr(b, v[i])!=0 )
            {
                if(strchr(b, v[i-1])==0 && strchr(b, v[i+1])==0)
                {
                    cnt++;
                }
            }
        }
    }
    cout<<cnt;
    return 0;
}


