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

    for(int i=0;i<size-1;i++){
        int min=i ;
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }

            if(min!=i){
                swap(arr[i],arr[min]);
            }
    }

    cout <<"Sorted array:";
    for(int i=0;i<size;i++){
        cout <<arr[i] <<" ";
    }
}
