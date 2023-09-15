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
int f_gold ( int n, int m ) {
  return ( m * n * ( n + 1 ) * ( m + 1 ) ) / 4;
}


//TOFILL

int main() {
    vector<int> param0 {86,33,3,91,33,13,75,58,50,4};
    vector<int> param1 {70,65,5,12,27,75,36,64,51,44};
    for(int i = 0; i < param0.size(); ++i)
    {
        cout << f_gold(param0[i],param1[i]) << endl;
    }
    return 0;
}
