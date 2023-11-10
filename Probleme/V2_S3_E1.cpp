#include <iostream>

using namespace std;

int main()

{
     int n,d=1;
     cin>>n;
     while(d<=n/2&&d<n/d)
     {
         if(n%d==0)
         {
             cout<<"("<<n/d<<" "<<d<<") ";
         }
         d++;
     }

     return 0;
}
