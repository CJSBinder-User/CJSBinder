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
double f_gold ( int a, int b ) {
  double AM, GM, HM;
  AM = ( a + b ) / 2;
  GM = sqrt ( a * b );
  HM = ( GM * GM ) / AM;
  return HM;
}


//TOFILL

int main() {
    vector<int> param0 {54,42,63,19,41,7,39,11,96,15};
    vector<int> param1 {83,56,12,76,50,26,42,64,81,54};
    for(int i = 0; i < param0.size(); ++i)
    {
        cout << f_gold(param0[i],param1[i]) << endl;
    }
    return 0;
}
