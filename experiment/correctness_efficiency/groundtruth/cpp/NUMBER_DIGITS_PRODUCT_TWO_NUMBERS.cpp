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
int f_gold ( int a, int b ) {
  int count = 0;
  int p = abs ( a * b );
  if ( p == 0 ) return 1;
  while ( p > 0 ) {
    count ++;
    p = p / 10;
  }
  return count;
}


//TOFILL

int main() {
    vector<int> param0 {86,81,48,64,56,5,25,94,5,46};
    vector<int> param1 {39,87,84,80,20,70,13,83,55,46};
    for(int i = 0; i < param0.size(); ++i)
    {
        cout << f_gold(param0[i],param1[i]) << endl;
    }
    return 0;
}
