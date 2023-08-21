/*
2 3
1 2
*/
#include<iostream>

using namespace std;

struct nrcomplex
{
    float re;
    float im;
};

int main()
{
    int n;
    nrcomplex a, b;
    cin>>a.re>>a.im>>b.re>>b.im;
    cout<<endl;

    if(a.im<0)
    {
        cout<<"a="<<a.re<<"+i("<<a.im<<")"<<endl;
    }
    else
    {
        cout<<"a="<<a.re<<"+i"<<a.im<<endl;
    }


    if(b.im<0)
    {
        cout<<"b="<<b.re<<"+i("<<b.im<<")"<<endl;
    }
    else
    {
        cout<<"b="<<b.re<<"+i"<<b.im<<endl;
    }


    if(a.im+b.im<0)
    {
        cout<<"a+b="<<a.re+b.re<<"+i("<<a.im+b.im<<")"<<endl;
    }
    else
    {
        cout<<"a+b="<<a.re+b.re<<"+i"<<a.im+b.im<<endl;
    }


    if(a.im-b.im<0)
    {
        cout<<"a-b="<<a.re-b.re<<"+i("<<a.im-b.im<<")"<<endl;
    }
    else
    {
        cout<<"a-b="<<a.re-b.re<<"+i"<<a.im-b.im<<endl;
    }


    if(a.im*b.re+b.im*a.re<0)
    {
        cout<<"a*b="<<a.re*b.re-a.im*b.im<<"+i("<<a.im*b.re+b.im*a.re<<")"<<endl;
    }
    else
    {
        cout<<"a*b="<<a.re*b.re-a.im*b.im<<"+i"<<a.im*b.re+b.im*a.re<<endl;
    }


    if((a.im*b.re-b.im*a.re)/(b.re*b.re+b.im*b.im)<0)
    {
        cout<<"a/b="<<(a.re*b.re+a.im*b.im)/(b.re*b.re+b.im*b.im)<<"+i("<<(a.im*b.re-b.im*a.re)/(b.re*b.re+b.im*b.im)<<")"<<endl;
    }
    else
    {
        cout<<"a/b="<<(a.re*b.re+a.im*b.im)/(b.re*b.re+b.im*b.im)<<"+i"<<(a.im*b.re-b.im*a.re)/(b.re*b.re+b.im*b.im)<<endl;
    }


    return 0;
}
