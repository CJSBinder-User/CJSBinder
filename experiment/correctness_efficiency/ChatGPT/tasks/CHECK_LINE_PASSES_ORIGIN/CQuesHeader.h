#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class CHECK_LINE_PASSES_ORIGIN {
public:
    bool C_L_P_O_f_gold(int x1, int y1, int x2, int y2)
    { 
        return ( x1 * ( y2 - y1 ) == y1 * ( x2 - x1 ) ) ; 
    } 
CHECK_LINE_PASSES_ORIGIN() {}
};