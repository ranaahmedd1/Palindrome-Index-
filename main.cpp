#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int palindromeIndex(string s) {
    string p=s;
    reverse(p.begin(), p.end());
    if(p==s){
        return -1;
    }
   for (int i=1;i<s.length();i++){
      p=s;
      string temp=s;
       p.erase(i, 1);
       reverse(p.begin(), p.end());
       temp.erase(i, 1);
      if(p==temp){
          return i;


    }

    }
    return -1;
}
int main() {
 string s;
    cin>>s;
    int n=palindromeIndex(s);
    std::cout << "the answer =" << n<< std::endl;
    return 0;
}
