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
  unsigned count = 0;
  if ( n && ! ( n & ( n - 1 ) ) ) return n;
  while ( n != 0 ) {
    n >>= 1;
    count += 1;
  }
  return 1 << count;
}


//TOFILL

int main() {
    vector<int> param0 {13,27,1,24,98,94,36,41,74,39};
    for(int i = 0; i < param0.size(); ++i)
    {
        cout << f_gold(param0[i]) << endl;
    }
    return 0;
}