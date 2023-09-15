#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class CIRCLE_LATTICE_POINTS {
public:
    int C_L_P_f_gold(int r)
    { 
        if ( r <= 0 ) return 0 ; 
        int result = 4 ; 
        for ( int x = 1 ; 
        x < r ; 
        x ++ ) { 
            int ySquare = r * r - x * x ; 
            int y = sqrt ( ySquare ) ; 
            if ( y * y == ySquare ) result += 4 ; 
        } 
        return result ; 
    } 
CIRCLE_LATTICE_POINTS() {}
};