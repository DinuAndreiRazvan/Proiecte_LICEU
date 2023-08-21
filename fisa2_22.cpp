#include <iostream>

using namespace std;

int main()

{
     int n,ogl,p=1,aux;
     cin>>n;
     while(n!=0)
     {
         ogl=0;
         aux=n;
         while(n!=0)
         {
             ogl=ogl*10+n%10;
             n=n/10;

         }
         if(aux==ogl)
         {
             p=p*aux;
         }
         cin>>n;
     }
     cout<<p;



    return 0;
}
