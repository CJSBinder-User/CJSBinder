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
int f_gold ( int num, int divisor ) {
  return ( num - divisor * ( num / divisor ) );
}


//TOFILL

int main() {
    vector<int> param0 {80,63,1,22,66,61,45,29,95,9};
    vector<int> param1 {54,21,56,39,7,67,63,44,65,68};
    for(int i = 0; i < param0.size(); ++i)
    {
        cout << f_gold(param0[i],param1[i]) << endl;
    }
    return 0;
}
