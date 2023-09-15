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
  double volume = ( pow ( side, 3 ) / ( 6 * sqrt ( 2 ) ) );
  return volume;
}


//TOFILL

int main() {
    vector<int> param0 {58,56,35,99,13,45,40,92,7,13};
    for(int i = 0; i < param0.size(); ++i)
    {
        cout << f_gold(param0[i]) << endl;
    }
    return 0;
}
