/*ana,. are mere si;; doua pere?!*/
#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    char s[256],t[20],maxi[20];
    char *p;
    cin.getline(s,255);
    maxi[0]=0;
    p=strtok(s," ,.;?!");
    while(p)
    {
        strcpy(t,p);
        int i=0;

        if(strlen(t)>strlen(maxi))
        {
            strcpy(maxi,t);
        }
        else
        {
            if(strlen(t)==strlen(maxi))
            {
                i=0;
                if(strcmp(t,maxi)<0)
                {
                    strcpy(maxi,t);
                }
            }
        }
        p=strtok(NULL," ,.;?!");
    }

    cout<<endl<<maxi;

    return 0;
}
