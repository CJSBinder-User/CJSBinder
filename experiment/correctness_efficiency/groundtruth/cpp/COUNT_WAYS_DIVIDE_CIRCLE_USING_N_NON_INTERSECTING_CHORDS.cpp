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
int f_gold ( int A ) {
  int n = 2 * A;
  int dpArray [ n + 1 ] = {
    0 };
    dpArray [ 0 ] = 1;
    dpArray [ 2 ] = 1;
    for ( int i = 4;
    i <= n;
    i += 2 ) {
      for ( int j = 0;
      j < i - 1;
      j += 2 ) {
        dpArray [ i ] += ( dpArray [ j ] * dpArray [ i - 2 - j ] );
      }
    }
    return dpArray [ n ];
  }
  

//TOFILL

int main() {
    vector<int> param0 {32,52,52,32,73,31,29,75,39,49};
    for(int i = 0; i < param0.size(); ++i)
    {
        cout << f_gold(param0[i]) << endl;
    }
    return 0;
}