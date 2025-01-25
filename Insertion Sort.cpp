#include<bits/stdc++.h>
#include<iostream>
using namespace std;
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

    for(int i=1;i<size;i++){
        int current=arr[i];
        int j=i-1;

        while(j>=0 && arr[j]>current){
            arr[j+1]=arr[j];
            j--;
        }

        arr[j+1]=current;
    }

    cout <<"Sorted array:";
    for(int i=0;i<size;i++){
    cout << arr[i] <<" ";
}
}
