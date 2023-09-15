// Copyright (c) 2019-present, Facebook, Inc.
// All rights reserved.
//
// This source code is licensed under the license found in the
// LICENSE file in the root directory of this source tree.
//

#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <fstream>
#include <iomanip>
#include <bits/stdc++.h>
using namespace std;
bool f_gold ( string s ) {
  int n = s . length ( );
  for ( int i = 1;
  i < n;
  i ++ ) if ( s [ i ] != s [ 0 ] ) return false;
  return true;
}


//TOFILL

int main() {
    vector<string> param0 {"","ggg","11","KoYIHns","232","10111000011101","DDDD","11","11111","ewJvixQzu"};
    for(int i = 0; i < param0.size(); ++i)
    {
        cout << f_gold(param0[i]) << endl;
    }
    return 0;
}
