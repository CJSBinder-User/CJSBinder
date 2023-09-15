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
int f_gold ( long n ) {
  int S = 0;
  for ( int i = 1;
  i <= n;
  i ++ ) S += i * i - ( i - 1 ) * ( i - 1 );
  return S;
}


//TOFILL

int main() {
    vector<long> param0 {39,20,10,39,70,21,21,80,89,99};
    for(int i = 0; i < param0.size(); ++i)
    {
        cout << f_gold(param0[i]) << endl;
    }
    return 0;
}
