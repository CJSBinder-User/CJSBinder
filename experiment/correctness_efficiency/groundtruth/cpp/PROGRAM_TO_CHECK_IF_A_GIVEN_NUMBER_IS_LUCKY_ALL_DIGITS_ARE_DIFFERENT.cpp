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
bool f_gold ( int n ) {
  bool arr [ 10 ];
  for ( int i = 0;
  i < 10;
  i ++ ) arr [ i ] = false;
  while ( n > 0 ) {
    int digit = n % 10;
    if ( arr [ digit ] ) return false;
    arr [ digit ] = true;
    n = n / 10;
  }
  return true;
}


//TOFILL

int main() {
    vector<int> param0 {474,9445,90,30,37453,27,2400,98,46,722};
    for(int i = 0; i < param0.size(); ++i)
    {
        cout << f_gold(param0[i]) << endl;
    }
    return 0;
}
