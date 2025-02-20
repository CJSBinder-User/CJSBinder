#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class STRING_K_DISTINCT_CHARACTERS_NO_CHARACTERS_ADJACENT {
public:
    string S_K_D_C_N_C_A_f_gold(int n, int k)
    { 
  string res = "";
  //vector<int> vec;
  for ( int i = 0;
  i < k;
  i ++ ) {
    res = res + ( char ) ( 'a' + i );
    //vec.push_back('a'+i);
  }
  int count = 0;
  for ( int i = 0;
  i < n - k;
  i ++ ) {
    res = res + ( char ) ( 'a' + count );
    //vec.push_back('a'+count);
    count ++;
    if ( count == k ) count = 0;
  }
  /*
  for(auto i :vec){
    cout <<  i << ",";
  }
  cout << endl;*/
  return res;
    } 
STRING_K_DISTINCT_CHARACTERS_NO_CHARACTERS_ADJACENT() {}
};