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
bool f_gold ( string s ) {
  for ( int i = 0;
  i < s . length ( );
  i ++ ) if ( isdigit ( s [ i ] ) == false ) return false;
  return true;
}


//TOFILL

int main() {
    vector<string> param0 {"MgTOyHo NT","033675175","011001","XLlccG","8223900094410","000","aupp","90202721499","110000100011","MhYHsMQeLhG"};
    for(int i = 0; i < param0.size(); ++i)
    {
        cout << f_gold(param0[i]) << endl;
    }
    return 0;
}