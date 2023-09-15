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
long int f_gold ( int n ) {
  if ( n == 1 ) return 1;
  long int z;
  float e = 2.71;
  z = sqrt ( 2 * 3.14 * n ) * pow ( ( n / e ), n );
  return z;
}


//TOFILL

int main() {
    vector<double> param0 {1,5,10,20,40,2,3,-1,4663,-3722};
    for(int i = 0; i < param0.size(); ++i)
    {
        cout << f_gold(param0[i]) << endl;
    }
    return 0;
}
