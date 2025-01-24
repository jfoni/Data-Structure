#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void rev(int arr[],int size)
    {
        int temp[size];
        for(int i=0;i<size;i++){
            temp[i]=arr[size-i-1];
        }
        for(int i=0;i<size;i++){
            arr[i]=temp[i];
        }
    }

int main()
{
    int size;
    cout <<"Enter the size of the array:";
    cin >>size;

    int arr[size];
    cout <<"Enter the elements of the array:";
    for(int i=0;i<size;i++){
        cin >>arr[i];
    }

    rev(arr,size);
    for(int i=0;i<size;i++){
        cout <<arr[i] <<" ";
    }
}
