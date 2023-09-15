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
  if ( n == 0 || n == 1 ) return n;
  int f1 = 0, f2 = 1, f3 = 1;
  while ( f3 <= n ) {
    f1 = f2;
    f2 = f3;
    f3 = f1 + f2;
  }
  return f2;
}


//TOFILL

int main() {
    vector<int> param0 {54,71,64,71,96,43,70,94,95,69};
    for(int i = 0; i < param0.size(); ++i)
    {
        cout << f_gold(param0[i]) << endl;
    }
    return 0;
}
