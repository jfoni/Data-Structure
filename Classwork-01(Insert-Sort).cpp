#include<bits\stdc++.h>
#include<iostream>
using namespace std;

void sort(int array[],int size)
{
    int number_one = 0, number_two = 0;
    for(int i=1;i<size;i++){
        int count = array[i];
        int j = i-1;
        while (count < array[j] && j >= 0){
            array[j+1] = array[j];
            --j;
            number_one++;
        }
        array[j+1] = count;
        number_two++;
    }
    cout <<number_one<<" "<<number_two<<endl;
}
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
    sort(arr,size);
    cout <<"Sorted Array:";
    for(int i=0;i<size;i++){
        cout <<arr[i] <<" ";
    }
    cout <<endl;
}


