#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
  int m;
  cin>>m;
  int a[m];
  int count=0;
  for(int i=0;i<m;i++){
      cin>>a[i];
  }
  for(int i=0;i<m;i++){
      if(a[i]!=a[i+1]){
          count++;
      }
  }
  cout<<count;
  return 0;
}
