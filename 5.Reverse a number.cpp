#include<iostream>
using namespace std;

int reverseNumber(int num)
{
    int rev=0;

    while(num>0)
    {
        rev= (rev*10) + (num%10);
        num= num/10;
    }
    return rev;
}

int main()
{
    int num;

    cout<<"Your number: ";
    cin>>num;

    cout<<"Reverse number: "<<reverseNumber(num)<<endl;
}
