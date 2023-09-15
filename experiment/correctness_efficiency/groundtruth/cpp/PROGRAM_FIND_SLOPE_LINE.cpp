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
double f_gold ( double x1, double y1, double x2, double y2 ) {
  return ( y2 - y1 ) / ( x2 - x1 );
}


//TOFILL

int main() {
    vector<double> param0 {236.27324548309292,-9201.144918204123,3480.4716834445326,-6915.538971485092,8887.97173657486,-3785.5177159369946,3037.6696554256832,-7925.458496016523,1404.2919985268031,-4748.744241168378};
    vector<double> param1 {5792.493225762838,-2716.3347716140406,3577.9608612055613,-4113.601103381095,1678.4080012662428,-3084.67461899163,4432.445827549,-3350.27411882042,8971.636233373416,-675.557388148954};
    vector<double> param2 {7177.837879115863,-5161.142121227645,8611.515262945342,-748.3462104020822,8709.574949883017,-7415.76208254121,8387.304165588026,-5619.767086756504,3039.112051378511,-5998.241086029875};
    vector<double> param3 {1289.5700425822731,-3205.784279961129,6744.864707668983,-9245.271700539257,8548.492675510739,-887.5389305564152,611.3373507518394,-1185.7423219907591,1947.6756252708972,-4236.658178504375};
    for(int i = 0; i < param0.size(); ++i)
    {
        cout << f_gold(param0[i],param1[i],param2[i],param3[i]) << endl;
    }
    return 0;
}
