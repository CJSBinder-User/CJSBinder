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
  if ( n <= 1 ) return false;
  for ( int i = 2;
  i < n;
  i ++ ) if ( n % i == 0 ) return false;
  return true;
}


//TOFILL

int main() {
    vector<int> param0 {37,39,73,8,28,66,20,36,6,51};
    for(int i = 0; i < param0.size(); ++i)
    {
        cout << f_gold(param0[i]) << endl;
    }
    return 0;
}
