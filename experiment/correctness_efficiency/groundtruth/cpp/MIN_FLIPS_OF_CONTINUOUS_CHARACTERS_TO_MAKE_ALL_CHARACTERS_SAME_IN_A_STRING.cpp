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
int f_gold ( string str, int n ) {
  char last = ' ';
  int res = 0;
  for ( int i = 0;
  i < n;
  i ++ ) {
    if ( last != str [ i ] ) res ++;
    last = str [ i ];
  }
  return res / 2;
}


//TOFILL

int main() {
    vector<string> param0 {"VrTpXWR","2","00011111","adAIqCcOkao","6696836653","0010111","jGYH","4374","0","cNM"};
    vector<int> param1 {46,58,84,85,52,78,60,52,56,35};
    for(int i = 0; i < param0.size(); ++i)
    {
        cout << f_gold(&param0[i].front(),param0[i].length()) << endl;
    }
    return 0;
}
