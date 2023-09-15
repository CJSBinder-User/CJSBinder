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
bool f_gold ( unsigned int n ) {
  return n != 0 && ( ( n & ( n - 1 ) ) == 0 ) && ! ( n & 0xAAAAAAAA );
}


//TOFILL

int main() {
    vector<int> param0 {1,4,62,64,128,1024,97,86,14,99};
    for(int i = 0; i < param0.size(); ++i)
    {
        cout << f_gold(param0[i]) << endl;
    }
    return 0;
}
