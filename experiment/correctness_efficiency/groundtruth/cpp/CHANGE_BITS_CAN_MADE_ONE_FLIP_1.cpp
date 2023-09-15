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
bool f_gold ( string str ) {
  int sum = 0;
  int n = str . length ( );
  for ( int i = 0;
  i < n;
  i ++ ) sum += str [ i ] - '0';
  return ( sum == n - 1 || sum == 1 );
}


//TOFILL

int main() {
    vector<string> param0 {"00001","0000","11","111110","1","111010111010","hUInqJXNdbfP","5191","1110101101","NupSrU xz"};
    for(int i = 0; i < param0.size(); ++i)
    {
        cout << f_gold(param0[i]) << endl;
    }
    return 0;
}