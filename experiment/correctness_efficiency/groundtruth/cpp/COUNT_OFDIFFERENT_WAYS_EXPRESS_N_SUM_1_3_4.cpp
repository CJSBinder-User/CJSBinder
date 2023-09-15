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
int f_gold ( int n ) {
  int DP [ n + 1 ];
  DP [ 0 ] = DP [ 1 ] = DP [ 2 ] = 1;
  DP [ 3 ] = 2;
  for ( int i = 4;
  i <= n;
  i ++ ) DP [ i ] = DP [ i - 1 ] + DP [ i - 3 ] + DP [ i - 4 ];
  return DP [ n ];
}


//TOFILL

int main() {
    vector<int> param0 {44,9,19,10,78,94,70,81,81,49};
    for(int i = 0; i < param0.size(); ++i)
    {
        cout << f_gold(param0[i]) << endl;
    }
    return 0;
}
