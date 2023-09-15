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
string f_gold ( string s, int n ) {
  string s1 = s;
  for ( int i = 1;
  i < n;
  i ++ ) s += s1;
  return s;
}


//TOFILL

int main() {
    vector<string> param0 {"LPWsaI","9037515104","00100010010111","SbwipuE","574314109","1101","f","068","000011001","BWbUtIkC"};
    vector<int> param1 {41,72,95,27,5,70,91,50,38,79};
    for(int i = 0; i < param0.size(); ++i)
    {
        cout << f_gold(param0[i],param1[i]) << endl;
    }
    return 0;
}
