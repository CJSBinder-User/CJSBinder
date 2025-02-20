#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class MAXIMIZE_VOLUME_CUBOID_GIVEN_SUM_SIDES_1 {
public:
    int M_V_C_G_S_S_1_f_gold(int s)
    { 
        int length = s / 3 ; 
        s -= length ; 
        int breadth = s / 2 ; 
        int height = s - breadth ; 
        return length * breadth * height ; 
    } 
MAXIMIZE_VOLUME_CUBOID_GIVEN_SUM_SIDES_1() {}
};