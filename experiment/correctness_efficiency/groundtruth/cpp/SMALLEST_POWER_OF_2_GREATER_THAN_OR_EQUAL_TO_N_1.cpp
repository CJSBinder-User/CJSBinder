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
  unsigned int p = 1;
  if ( n && ! ( n & ( n - 1 ) ) ) return n;
  while ( p < n ) p <<= 1;
  return p;
}


//TOFILL

int main() {
    vector<int> param0 {31,89,92,66,38,34,17,24,54,20};
    for(int i = 0; i < param0.size(); ++i)
    {
        cout << f_gold(param0[i]) << endl;
    }
    return 0;
}