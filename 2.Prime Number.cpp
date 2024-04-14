#include <iostream>
using namespace std;

void primeNumber(int num)
{
    if(num<=1)
    {
        cout<<"0 and 1 are not prime numbers";
    }
    else
    {
        for(int i=2; i<=num/2; i++)
        {
            if(num%i==0)
            {
                cout<<num<<" is not a prime number."<<endl;
                return;
            }
        }
        cout<<num<<" is a prime number."<<endl;
    }
}

int main()
{
    int num;

    cout<<"Your number: ";
    cin>> num;

    primeNumber(num);

    return 0;
}
