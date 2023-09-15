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
int f_gold ( int n ) {
  int answer [ n + 1 ] = {
    0 };
    answer [ 0 ] = 1;
    for ( int i = 1;
    i <= n;
    i ++ ) answer [ i ] = answer [ i - 1 ] * 3 + 2;
    return answer [ n ];
  }
  

//TOFILL

int main() {
    vector<int> param0 {33,72,81,93,8,76,97,91,61,6};
    for(int i = 0; i < param0.size(); ++i)
    {
        cout << f_gold(param0[i]) << endl;
    }
    return 0;
}
