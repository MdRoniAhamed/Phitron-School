#include <iostream>
#include <string>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// Complete the program
  string s;
  string b;
  cin>>s>>b;
  int a = s.size();
  int c= b.size();
  cout<<a<<" " <<c<<endl;
  cout<<s<<b;
  
  char temp = s[0] ;
  s[0] = b[0];
  b[0] = temp;
  cout<<s<<" "<< b<<endl;
  
    return 0;
}