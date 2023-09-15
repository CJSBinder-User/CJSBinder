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
double f_gold ( double a ) {
  double area;
  area = ( sqrt ( 5 * ( 5 + 2 * ( sqrt ( 5 ) ) ) ) * a * a ) / 4;
  return area;
}


//TOFILL

int main() {
    vector<double> param0 {2009.019461888707,-1480.5131394215787,357.7870347569567,-8040.293697508038,3821.882657293133,-6840.635072240347,1623.036598830132,-9714.00706195298,3916.454769669618,-669.068424712943};
    for(int i = 0; i < param0.size(); ++i)
    {
        cout << f_gold(param0[i]) << endl;
    }
    return 0;
}
