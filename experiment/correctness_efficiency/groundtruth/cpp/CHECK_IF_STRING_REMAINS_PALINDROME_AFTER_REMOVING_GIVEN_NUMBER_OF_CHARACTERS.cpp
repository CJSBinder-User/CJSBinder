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
bool f_gold ( string str, int n ) {
  int len = str . length ( );
  if ( len >= n ) return true;
  return false;
}


//TOFILL

int main() {
    vector<string> param0 {"ZCoQhuM","7437725","11","buGlvR","9","101101010110","YguiM","8198","11101","hUInqJXNdbfP"};
    vector<int> param1 {2,53,30,1,92,3,18,90,71,4};
    for(int i = 0; i < param0.size(); ++i)
    {
        cout << f_gold(param0[i],param1[i]) << endl;
    }
    return 0;
}