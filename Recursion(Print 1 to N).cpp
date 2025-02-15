#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void printNums(int n)
{
    if(n==1){
        cout << "1 ";
        return;
    }
    printNums(n-1);
    cout << n << " ";
}

int main()
{
  int x;
  cout <<"Enter the element:";
  cin >> x;

  printNums(x);
  cout << endl;
}
