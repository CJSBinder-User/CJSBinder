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
  int res = 0;
  for ( int x = 0;
  x * x < n;
  x ++ ) for ( int y = 0;
  x * x + y * y < n;
  y ++ ) res ++;
  return res;
}


//TOFILL

int main() {
    vector<int> param0 {61,45,53,4,82,86,37,48,81,50};
    for(int i = 0; i < param0.size(); ++i)
    {
        cout << f_gold(param0[i]) << endl;
    }
    return 0;
}
