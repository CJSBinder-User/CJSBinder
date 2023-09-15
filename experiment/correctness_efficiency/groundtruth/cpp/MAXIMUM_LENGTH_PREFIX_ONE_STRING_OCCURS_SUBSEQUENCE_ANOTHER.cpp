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
int f_gold ( string s , string t ) {
  int count = 0;
  for ( int i = 0;
  i < t . length ( );
  i ++ ) {
    if ( count == s . length ( ) ) break;
    if ( t [ i ] == s [ count ] ) count ++;
  }
  return count;
}


//TOFILL

int main() {
    vector<string> param0 {"nObYIOjEQZ","84574","1010001010010","DjZtAfUudk","550","1110","GywyxwH","67318370914755","11011000000101","G"};
    vector<string> param1 {"uARTDTQbmGI","8538229","11","OewGm","132744553919","0101","LPQqEqrDZiwY","9928","00000","V"};
    for(int i = 0; i < param0.size(); ++i)
    {
        cout << f_gold(&param0[i].front(),&param1[i].front()) << endl;
    }
    return 0;
}
