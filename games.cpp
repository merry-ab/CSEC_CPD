#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
  int b,count=0;
  cin>>a;
  int x[b],y[b];
  for(int i=0;i<b;i++){
      cin>>x[i];
      cin>>y[i];
  }
  for(int i=0;i<b;i++){
      for(int j=0;j<b;j++){
          if(x[i]==y[j]){
              count++;
          }
      }
  } 
  cout<<count;
return 0;
}
