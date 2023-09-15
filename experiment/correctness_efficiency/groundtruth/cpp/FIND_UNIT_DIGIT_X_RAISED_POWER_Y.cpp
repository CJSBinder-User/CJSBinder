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
int f_gold ( int x, int y ) {
  int res = 1;
  for ( int i = 0;
  i < y;
  i ++ ) res = ( res * x ) % 10;
  return res;
}


//TOFILL

int main() {
    vector<int> param0 {33,95,21,3,40,64,17,58,44,27};
    vector<int> param1 {55,7,63,62,53,24,23,74,13,54};
    for(int i = 0; i < param0.size(); ++i)
    {
        cout << f_gold(param0[i],param1[i]) << endl;
    }
    return 0;
}
