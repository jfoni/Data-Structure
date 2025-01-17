#include<bits\stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    int size,value,pos;
    cout <<"Enter the size of the array:";
    cin >> size;

    int arr[size+1];
    cout <<"Enter the elements of the array:";
    for(int i=0;i<size;i++){
        cin >>arr[i];
    }

    cout <<"Enter the position where you want to insert:";
    cin >> pos;

    cout <<"Enter the value you want to insert:";
    cin >> value;

    for(int i=size;i>=pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos-1]=value;
    size++;

    cout <<"After insertion:" <<endl;
    for(int i=0;i<size;i++){
        cout <<arr[i] <<" ";
    }

}
