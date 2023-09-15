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
int f_gold ( int k ) {
  int cur = ( k * ( k - 1 ) ) + 1;
  int sum = 0;
  while ( k -- ) {
    sum += cur;
    cur += 2;
  }
  return sum;
}


//TOFILL

int main() {
    vector<int> param0 {91,52,78,51,65,39,42,12,56,98};
    for(int i = 0; i < param0.size(); ++i)
    {
        cout << f_gold(param0[i]) << endl;
    }
    return 0;
}
