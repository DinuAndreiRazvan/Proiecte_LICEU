#include <iostream>

 using namespace std;
 int sub(int n)
 {
     int i=1,aux;
     while(i<=n)
     {
         aux=i;
         if(i<5)
         {
             i++;
         }
         else
         {
             i=2*i;
         }
     }
     return aux;
 }

 int main()
 {
    int n;
    cin>>n;
    while(n!=0)
    {
        cout<<sub(n)<<" ";
        n=n-sub(n);
    }
 }
