#include<iostream>
using namespace std;
int main()
{
    int length = 6;
    int arr[] = {6, 4, 8, 7, 2, 9};
    for (int i = 0; i < length;i++) {
        int min = i;
        for (int j = i; j < length; j++)
            if(arr[min]>arr[j])
                min = j;
        int t = arr[min];
        arr[min] = arr[i];
        arr[i] = t;
    }
    for (int i = 0; i < length;i++)
        cout << arr[i] << " ";
}