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
  for ( int sum = 0, i = 1;
  sum < n;
  i += 2 ) {
    sum += i;
    if ( sum == n ) return true;
  }
  return false;
}


//TOFILL

int main() {
    vector<int> param0 {1,4,9,25,36,3,121,14,17,80};
    for(int i = 0; i < param0.size(); ++i)
    {
        cout << f_gold(param0[i]) << endl;
    }
    return 0;
}
