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
bool f_gold ( int num ) {
  if ( num < 0 ) return false;
  int sum = 0;
  for ( int n = 1;
  sum <= num;
  n ++ ) {
    sum = sum + n;
    if ( sum == num ) return true;
  }
  return false;
}


//TOFILL

int main() {
    vector<int> param0 {97,97,32,40,18,14,90,39,1,57};
    for(int i = 0; i < param0.size(); ++i)
    {
        cout << f_gold(param0[i]) << endl;
    }
    return 0;
}
