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
bool f_gold ( string str ) {
  int n = str . length ( );
  int i;
  for ( i = 0;
  i < n;
  i ++ ) if ( str [ i ] != 'a' ) break;
  if ( i * 2 != n ) return false;
  int j;
  for ( j = i;
  j < n;
  j ++ ) if ( str [ j ] != 'b' ) return false;
  return true;
}


//TOFILL

int main() {
    vector<string> param0 {"ba","aabb","abab","aaabb","aabbb","abaabbaa","abaababb","bbaa","11001000","ZWXv te"};
    for(int i = 0; i < param0.size(); ++i)
    {
        cout << f_gold(param0[i]) << endl;
    }
    return 0;
}