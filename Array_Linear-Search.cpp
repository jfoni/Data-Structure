#include<bits\stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    int size;
    cout <<"Enter the size of the array:";
    cin >> size;

    int arr[size],s,temp=0;
    cout <<"Enter the elements of the array:";
    for(int i=0;i<size;i++){
        cin >>arr[i];
    }
    cout <<"Enter the search elements of the array:";
    cin >> s;
    for(int i=0;i<size;i++){
        if(arr[i]==s){
        temp++;
        break;
        }
    }
    if(temp==1){
        cout <<"search element is present" <<endl;
    }
    else{
        cout <<"Search element is absent" <<endl;
    }
}

