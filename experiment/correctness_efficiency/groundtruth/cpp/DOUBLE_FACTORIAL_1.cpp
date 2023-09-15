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
unsigned int f_gold ( unsigned int n ) {
  int res = 1;
  for ( int i = n;
  i >= 0;
  i = i - 2 ) {
    if ( i == 0 || i == 1 ) return res;
    else res *= i;
  }
}


//TOFILL

int main() {
    vector<int> param0 {88,24,3,22,53,2,88,30,38,2};
    for(int i = 0; i < param0.size(); ++i)
    {
        cout << f_gold(param0[i]) << endl;
    }
    return 0;
}
