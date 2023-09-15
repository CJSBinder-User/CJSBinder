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
  int sum = 0;
  for ( int i = 1;
  i <= n;
  ++ i ) sum += ( n / i ) * i;
  return sum;
}


//TOFILL

int main() {
    vector<int> param0 {73,41,36,28,49,24,85,59,82,40};
    for(int i = 0; i < param0.size(); ++i)
    {
        cout << f_gold(param0[i]) << endl;
    }
    return 0;
}