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
double f_gold ( double s ) {
  return ( ( 3 * sqrt ( 3 ) * ( s * s ) ) / 2 );
}


//TOFILL

int main() {
    vector<double> param0 {1772.6589509256596,-599.737107809315,1074.1765931782,-1182.4087746714795,8083.035797247716,-6126.414356565494,5370.057504189614,-6947.020794285176,2110.5107873533325,-6458.751326919488};
    for(int i = 0; i < param0.size(); ++i)
    {
        cout << f_gold(param0[i]) << endl;
    }
    return 0;
}
