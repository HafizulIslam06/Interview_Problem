#include<iostream>
using namespace std;

int largestNum(int arr[], int size)
{
    int largest = 0;
    for(int i = 0; i < size; i++)
    {
        if(arr[i] > arr[largest])
        {
            largest = i;
        }
    }
    return largest;
}

int secondLargestNum(int arr[], int size)
{
    int largest = largestNum(arr, size);
    int res = -1;

    for(int i = 0; i < size; i++)
    {
        if(arr[i] != arr[largest])
        {
            if(res == -1)
            {
                res= i;
            }
            else if(arr[i]>arr[res])
            {
                res=i;

            }
        }
    }
    return res;
}

int main()
{
    int arr[] = {5,4,3,2,1};
    int size = sizeof(arr) / sizeof(arr[0]);

    int secondLargest = secondLargestNum(arr, size);
    cout << "Second Largest Number: " << arr[secondLargest] << endl;
    return 0;
}

