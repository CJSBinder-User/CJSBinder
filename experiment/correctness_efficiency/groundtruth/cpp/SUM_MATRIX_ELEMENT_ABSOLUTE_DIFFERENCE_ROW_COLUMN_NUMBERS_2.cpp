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
  n --;
  int sum = 0;
  sum += ( n * ( n + 1 ) ) / 2;
  sum += ( n * ( n + 1 ) * ( 2 * n + 1 ) ) / 6;
  return sum;
}


//TOFILL

int main() {
    vector<int> param0 {12,89,76,2,81,11,26,35,16,66};
    for(int i = 0; i < param0.size(); ++i)
    {
        cout << f_gold(param0[i]) << endl;
    }
    return 0;
}
