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
  int res = 1, i;
  for ( i = 2;
  i <= n;
  i ++ ) res *= i;
  return res;
}


//TOFILL

int main() {
    vector<int> param0 {15,7,16,67,71,16,77,27,37,73};
    for(int i = 0; i < param0.size(); ++i)
    {
        cout << f_gold(param0[i]) << endl;
    }
    return 0;
}
