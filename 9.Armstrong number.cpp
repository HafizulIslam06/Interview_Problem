#include<iostream>
using namespace std;

void armstrongNumber(int num)
{
    int check=0, org=num;
    while(num>0)
    {
        check= check+ (num%10)* (num%10)* (num%10);
        num= num/10;
    }

    if(org==check)
    {
        cout<<"armstrong number"<<endl;
    }
    else
    {
        cout<<"Not armstrong";
    }
}

int main()
{
    int num;
    cout<<"Your number: ";
    cin>>num;

    armstrongNumber(num);
}

