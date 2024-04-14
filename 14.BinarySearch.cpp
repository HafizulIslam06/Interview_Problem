#include<iostream>
using namespace std;

void binarySearch(int arr[], int size, int num)
{
    int first=0, last= size - 1;

    while(first<last)
    {
        int mid= (first + last) / 2;

        if(arr[mid] == num)
        {
            cout<<"Successful."<<endl;
            return;
        }
        else if(arr[mid] < num)
        {
            first= mid + 1;
        }
        else
        {
            last= mid - 1;
        }
    }
    cout<<"Not Found!"<<endl;
}

int main()
{
    int num, arr[]={1,2,3,4,5,6,7,8,9};
    int length= sizeof(arr) / sizeof(arr[0]);

    cout<<"Search a number: ";
    cin>>num;

    binarySearch(arr, length, num);

    return 0;
}

