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
bool f_gold ( string str , int k ) {
  int n = str . length ( ) ; 
  int c = 0;
  for ( int i = 0;
  i < k;
  i ++ ) if ( str [ n - i - 1 ] == '0' ) c ++;
  return ( c == k );
}


//TOFILL

int main() {
    vector<string> param0 {"111010100","111010100","111010100","111010000","111010000","10110001","tPPdXrYQSI","58211787","011","IkSMGqgzOrteVO"};
    vector<int> param1 {2,2,4,3,4,1,61,73,88,23};
    for(int i = 0; i < param0.size(); ++i)
    {
        cout << f_gold(&param0[i].front(),param1[i]) << endl;
    }
    return 0;
}
