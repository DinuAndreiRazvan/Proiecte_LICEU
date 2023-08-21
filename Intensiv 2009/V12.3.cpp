#include <iostream>
#include <fstream>

using namespace std;

ifstream fin1("V12.1.in");
ifstream fin2("V12.2.in");

int main()
{
    int nr1, nr2 = 1, k;

    while(fin1 >> nr1)
    {
        if(nr1 % 5 == 0)
        {
            k = 0;
            do
            {
                if(nr2 % 5 == 0  nr2 == -1)
                {
                    if(nr1 != nr2)
                    {

                        if(nr1 < nr2  nr2 == -1)
                        {
                            cout << nr1 << " ";
                            k = 1;
                            break;
                        }
                        else
                        {
                            cout << nr2 << " ";
                        }
                    }
                    else
                    {
                        fin2 >> nr2;
                        k = 1;
                        break;
                    }
                }
            }while(fin2 >> nr2);
            if(k == 0)
            {
                nr2 = -1;
                if(nr1 % 5 == 0)
                {
                    cout << nr1 << " ";
                }
            }
        }
    }
    if(nr2 % 5 == 0)
    {
        cout << nr2 << " ";
    }
    while(fin2 >> nr2)
    {
        if(nr2 % 5 == 0)
        {
            cout << nr2 << " ";
        }
    }
    return 0;
}
