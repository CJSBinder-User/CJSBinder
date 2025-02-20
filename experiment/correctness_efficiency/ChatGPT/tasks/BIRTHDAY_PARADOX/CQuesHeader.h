#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class BIRTHDAY_PARADOX {
public:
    int B_P_f_gold(double p)
    { 
        return ceil ( sqrt ( 2 * 365 * log ( 1 / ( 1 - p ) ) ) ) ; 
    } 
BIRTHDAY_PARADOX() {}
};