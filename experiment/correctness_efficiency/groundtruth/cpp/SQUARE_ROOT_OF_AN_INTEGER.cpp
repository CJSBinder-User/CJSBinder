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
int f_gold ( int x ) {
  if ( x == 0 || x == 1 ) return x;
  int i = 1, result = 1;
  while ( result <= x ) {
    i ++;
    result = i * i;
  }
  return i - 1;
}


//TOFILL

int main() {
    vector<int> param0 {89,11,14,92,76,63,51,16,83,66};
    for(int i = 0; i < param0.size(); ++i)
    {
        cout << f_gold(param0[i]) << endl;
    }
    return 0;
}
