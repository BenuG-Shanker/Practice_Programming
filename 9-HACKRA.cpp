/*
An array is a series of elements of the same type placed in contiguouse memory locations that can be individually referenced by adding an index to a unique identifier.

for arrays of a known size;

int arr[10]; // declares an array named arr of size 10

C++ allows dynamic allocation of arrays at runtime without special calls like malloc().
Indexing in arrays starts from 0.
First element will be storred at arr[0], second element will be atorred at arr[1], and so on upto arr[9].
*/
#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    for (int i = n - 1; i >= 0; i--)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}