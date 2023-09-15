#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class FIND_HARMONIC_MEAN_USING_ARITHMETIC_MEAN_GEOMETRIC_MEAN {
public:
    double F_H_M_U_A_M_G_M_f_gold(int a, int b)
    { 
        double AM , GM , HM ; 
        AM = ( a + b ) / 2 ; 
        GM = sqrt ( a * b ) ; 
        HM = ( GM * GM ) / AM ; 
        return HM ; 
    } 
FIND_HARMONIC_MEAN_USING_ARITHMETIC_MEAN_GEOMETRIC_MEAN() {}
};