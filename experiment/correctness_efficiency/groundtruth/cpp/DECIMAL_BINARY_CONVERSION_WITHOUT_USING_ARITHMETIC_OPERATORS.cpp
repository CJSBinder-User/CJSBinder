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
string f_gold ( int n ) {
  if ( n == 0 ) return "0";
  string bin = "";
  while ( n > 0 ) {
    bin = ( ( n & 1 ) == 0 ? '0' : '1' ) + bin;
    n >>= 1;
  }
  return bin;
}


//TOFILL

int main() {
    vector<int> param0 {35,17,8,99,57,39,99,14,22,7};
    for(int i = 0; i < param0.size(); ++i)
    {
        cout << f_gold(param0[i]) << endl;
    }
    return 0;
}