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
double f_gold ( double r1, double r2, double r3 ) {
  double pi = 3.14;
  return 1.33 * pi * r1 * r2 * r3;
}


//TOFILL

int main() {
    vector<double> param0 {3287.4842316041018,-3707.427510963942,8980.643174783816,-2698.0187368852694,8627.156664162168,-7316.329924623669,7857.3846206400485,-6502.657905007728,4468.400513325576,-7231.864791620428};
    vector<double> param1 {4503.332888443404,-6671.335781753231,3584.781688607942,-1004.7289573934537,9572.27618966978,-6591.043206581106,3671.761679299217,-1412.2240121470609,2272.1999139470304,-8036.087711033032};
    vector<double> param2 {8590.24729914204,-2780.4954870801926,2818.469507143102,-9602.530725071243,4783.930377855004,-9760.465488363216,2534.5825334137794,-6135.238350044512,4753.075799180736,-6456.263512521035};
    for(int i = 0; i < param0.size(); ++i)
    {
        cout << f_gold(param0[i],param1[i],param2[i]) << endl;
    }
    return 0;
}
