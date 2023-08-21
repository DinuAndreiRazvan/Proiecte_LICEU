#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("bac.in");

int main()

{
     int n,max1=0,max2=0,max3=0;
     while(fin>>n)
     {
         if(n%10==0&&n/10%10==2)
         {
             if(max1<n)
             {
                 max3=max2;
                 max2=max1;
                 max1=n;
             }
             else
             {
                 if(max2<n)
                 {
                     max3=max2;
                     max2=n;
                 }
                 else
                 {
                     if(max3<n)
                     {
                         max3=n;
                     }


                 }
             }
         }
     }
     cout<<max3<<" "<<max2<<" "<<max1;

     return 0;
}
