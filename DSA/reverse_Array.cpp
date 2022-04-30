#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
string reverseWord(string str){
    
  //Your code here

  reverse(str.begin(), str.end());
  return str;
}

int main(){



    string string1;
    cin>>string1;
    string str = reverseWord(string1);
    cout<<str<<"\n";
}