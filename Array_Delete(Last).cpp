#include<bits\stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    int size;
    cout <<"Enter the size of the array:";
    cin >> size;

    int arr[size];
    cout <<"Enter the elements of the array:";
    for(int i=0;i<size;i++){
        cin >> arr[i];
    }

    if(size>0){

    size--;

    cout <<"Array after deleting the last element:";
    for(int i=0;i<size;i++){
        cout << arr[i] <<" ";
    }
    cout <<endl;
}
else {
    cout <<"Array is empty,nothing to delete" <<endl;
}
}
