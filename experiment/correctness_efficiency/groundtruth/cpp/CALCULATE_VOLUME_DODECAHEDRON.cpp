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
double f_gold ( int side ) {
  return ( ( ( 15 + ( 7 * ( sqrt ( 5 ) ) ) ) / 4 ) * ( pow ( side, 3 ) ) );
}


//TOFILL

int main() {
    vector<int> param0 {56,73,22,10,84,20,51,91,10,83};
    for(int i = 0; i < param0.size(); ++i)
    {
        cout << f_gold(param0[i]) << endl;
    }
    return 0;
}
