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
double f_gold ( double a, double b ) {
  return ( ( 2 * a ) + ( 2 * b ) );
}


//TOFILL

int main() {
    vector<double> param0 {801.0366882228715,-7069.610056819919,7723.966966568705,-7935.859205856963,6094.247432557289,-7371.490363309265,8368.473889617526,-3761.921143166053,3139.1089185587884,-5218.286665567171};
    vector<double> param1 {456.71190645582783,-4226.483870778477,5894.65405158763,-5333.225064296693,1660.420120702062,-1095.4543576847332,4735.838330834498,-5315.871691690649,6490.194159517967,-8265.153014320813};
    for(int i = 0; i < param0.size(); ++i)
    {
        cout << f_gold(param0[i],param1[i]) << endl;
    }
    return 0;
}
