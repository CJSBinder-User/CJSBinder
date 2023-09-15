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
int f_gold ( int s ) {
  int length = s / 3;
  s -= length;
  int breadth = s / 2;
  int height = s - breadth;
  return length * breadth * height;
}


//TOFILL

int main() {
    vector<int> param0 {8,96,96,96,12,95,72,81,42,13};
    for(int i = 0; i < param0.size(); ++i)
    {
        cout << f_gold(param0[i]) << endl;
    }
    return 0;
}