#include<bits\stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    int size,value;
    cout <<"Enter the size of the array:";
    cin >> size;

    int arr[size+1];
    cout <<"Enter the elements of the array:";
    for(int i=0;i<size;i++){
        cin >> arr[i];
    }

    cout <<"Enter the value you want to insert:";
    cin >> value;

    arr[size]=value;
    size++;

    cout <<"After insertion:";

    for(int i=0;i<size;i++){
        cout <<arr[i] <<" ";
    }
}
