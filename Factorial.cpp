#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int fac(int n)
{
    if(n==0){
        return 1;
    }
    else{
        return n*fac(n-1);
    }
}

int main()
{
  int x;
  cout <<"Enter the element:";
  cin >> x;

  int result=fac(x);
  cout <<"Result:" <<result <<endl;
}
