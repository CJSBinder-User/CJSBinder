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
  if ( n == 0 ) return 1;
  return n * f_gold ( n - 1 );
}


//TOFILL

int main() {
    vector<int> param0 {77,62,42,16,82,37,29,32,82,91};
    for(int i = 0; i < param0.size(); ++i)
    {
        cout << f_gold(param0[i]) << endl;
    }
    return 0;
}
