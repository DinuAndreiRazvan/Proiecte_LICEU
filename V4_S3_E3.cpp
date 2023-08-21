#include <iostream>
#include <fstream>

using namespace std;

ifstream fin ("V4_S3_E3.in");

int main()
{
    int nr1, nr2, cnt;
    fin >> nr1;
    cnt = 1;
    while(fin >> nr2)
    {
        if(nr1 == nr2)
        {
            cnt++;
        }
        else
        {
            if(cnt == 2)
            {
                cout<<nr1<< " ";
            }
            cnt = 1;
        }
        nr1 = nr2;
    }
    if(cnt == 2)
    {
        cout<<nr2<<" ";
    }
    return 0;
}

