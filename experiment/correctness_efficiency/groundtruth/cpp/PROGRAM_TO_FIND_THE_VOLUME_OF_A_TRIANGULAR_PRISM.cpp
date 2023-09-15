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
double f_gold ( double l, double b, double h ) {
  double volume = ( l * b * h ) / 2;
  return volume;
}


//TOFILL

int main() {
    vector<double> param0 {8448.900678262902,-1849.728957491451,412.667844022232,-5954.835911765373,8437.913444665008,-7183.181663518317,2340.7905920227954,-7281.157547371143,471.3930826982504,-7550.426360065503};
    vector<double> param1 {8135.461799983198,-4240.89241631363,9798.083992381831,-661.8872499003203,8182.675681595904,-6846.746446198541,5479.00956987109,-615.8705455524116,1357.3753126091392,-2693.2262997056355};
    vector<double> param2 {6577.239053611328,-9953.518310747193,1449.9204200270522,-8049.6051526695055,9863.296545513396,-971.2199894221352,7073.449591910562,-3343.0245192607968,1907.815700915636,-9110.64755244532};
    for(int i = 0; i < param0.size(); ++i)
    {
        cout << f_gold(param0[i],param1[i],param2[i]) << endl;
    }
    return 0;
}
