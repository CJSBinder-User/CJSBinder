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
int f_gold ( int N ) {
  int dp [ N ];
  dp [ 0 ] = 1;
  dp [ 1 ] = 2;
  int i = 2;
  do {
    dp [ i ] = dp [ i - 1 ] + dp [ i - 2 ];
  }
  while ( dp [ i ++ ] <= N );
  return ( i - 2 );
}


//TOFILL

int main() {
    vector<int> param0 {73,28,33,23,84,31,48,46,45,90};
    for(int i = 0; i < param0.size(); ++i)
    {
        cout << f_gold(param0[i]) << endl;
    }
    return 0;
}