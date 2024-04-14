#include<iostream>
using namespace std;

void fibonacci(int num)
{
    int first=0, second=1, next;

    cout<<"===Fibonacci Series==="<<endl;
    for(int i=0; i<num; i++)
    {
        cout<< first<< endl;
        next= first + second;
        first= second;
        second= next;
    }
}

int main()
{
    int num;

    cout<<"Your number: ";
    cin>>num;

    fibonacci(num);
}
