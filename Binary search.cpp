#include<bits\stdc++.h>
#include<iostream>
#include<algorithm>
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

    sort(arr,arr + size);
    cout <<"Sorted array is:";
    for(int i=0;i<size;i++){
        cout <<arr[i] <<" ";
    }
    cout <<endl;

    int target;
    cout <<"Enter the target element to search:";
    cin >> target;

    int low = 0, high = size - 1;
    bool found = false;

    while(low<=high){
        int mid = low + (high - low)/2;
        if(arr[mid] == target){
            cout <<"Element found at index:" <<mid <<endl;
            found = true;
            break;
        }
        else if(arr[mid] < target){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    if(!found){
        cout <<"Element not found" <<endl;
    }
}
