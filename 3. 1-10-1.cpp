#include <iostream>
using namespace std;

int main()
{
    int j=10;

    for(int i=1; i<20; i++)
    {
        if(i<10)
        {
            cout<<i<<endl;
        }
        else
        {
            cout<<j<<endl;
            j--;
        }

    }
}
