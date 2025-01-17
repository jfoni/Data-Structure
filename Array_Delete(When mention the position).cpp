#include<bits\stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    int size,pos;
    cout <<"Enter the size of the array:";
    cin >> size;

    int arr[size];
    cout <<"Enter the elements of the array:";
    for(int i=0;i<size;i++){
        cin >> arr[i];
    }
    cout <<"Enter the position to delete:";
    cin >>pos;
    if(pos>=0 && pos<size){
        for(int i=pos;i<size-1;i++){
            arr[i]=arr[i+1];
        }
        size--;
        cout <<"Array after deleting the element at position" <<" ";
        for(int i=0;i<size;i++){
            cout <<arr[i] <<" ";
        }
        cout <<endl;
    }
    else{
        cout<<"Invalid position,nothing to delete" <<endl;
    }
}
