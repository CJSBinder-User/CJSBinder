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
long long int f_gold ( long long int y, long long int x ) {
  if ( log2 ( y ) < x ) return y;
  if ( x > 63 ) return y;
  return ( y % ( 1 << x ) );
}


//TOFILL

int main() {
    vector<long> param0 {57,80,84,35,3,42,7,99,13,44};
    vector<long> param1 {76,46,96,16,84,79,2,83,61,8};
    for(int i = 0; i < param0.size(); ++i)
    {
        cout << f_gold(param0[i],param1[i]) << endl;
    }
    return 0;
}
