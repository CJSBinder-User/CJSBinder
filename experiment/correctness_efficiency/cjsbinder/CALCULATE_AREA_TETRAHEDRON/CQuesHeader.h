#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class CALCULATE_AREA_TETRAHEDRON {
public:
    double C_A_T_f_gold(int side)
    { 
        double volume = ( pow ( side , 3 ) / ( 6 * sqrt ( 2 ) ) ) ; 
        return volume ; 
    } 
CALCULATE_AREA_TETRAHEDRON() {}
};