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
long long f_gold ( long long n ) {
  long long maxPrime = - 1;
  while ( n % 2 == 0 ) {
    maxPrime = 2;
    n >>= 1;
  }
  for ( int i = 3;
  i <= sqrt ( n );
  i += 2 ) {
    while ( n % i == 0 ) {
      maxPrime = i;
      n = n / i;
    }
  }
  if ( n > 2 ) maxPrime = n;
  return maxPrime;
}


//TOFILL

int main() {
    vector<long> param0 {98,8,78,65,55,10,10,37,39,15};
    for(int i = 0; i < param0.size(); ++i)
    {
        cout << f_gold(param0[i]) << endl;
    }
    return 0;
}
