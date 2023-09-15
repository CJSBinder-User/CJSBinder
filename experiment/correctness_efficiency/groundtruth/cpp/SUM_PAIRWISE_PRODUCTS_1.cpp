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
long long int f_gold ( int n ) {
  long long int multiTerms = n * ( n + 1 ) / 2;
  long long int sum = multiTerms;
  for ( int i = 2;
  i <= n;
  i ++ ) {
    multiTerms = multiTerms - ( i - 1 );
    sum = sum + multiTerms * i;
  }
  return sum;
}


//TOFILL

int main() {
    vector<int> param0 {41,50,67,18,60,6,27,46,50,20};
    for(int i = 0; i < param0.size(); ++i)
    {
        cout << f_gold(param0[i]) << endl;
    }
    return 0;
}
