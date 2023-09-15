#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class CALCULATE_VOLUME_DODECAHEDRON {
public:
    double C_V_D_f_gold(int side)
    { 
        return ( ( ( 15 + ( 7 * ( sqrt ( 5 ) ) ) ) / 4 ) * ( pow ( side , 3 ) ) ) ; 
    } 
CALCULATE_VOLUME_DODECAHEDRON() {}
};