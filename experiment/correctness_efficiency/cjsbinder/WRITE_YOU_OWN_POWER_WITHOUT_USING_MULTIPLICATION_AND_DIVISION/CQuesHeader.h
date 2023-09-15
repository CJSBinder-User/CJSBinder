#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class WRITE_YOU_OWN_POWER_WITHOUT_USING_MULTIPLICATION_AND_DIVISION {
public:
    int W_Y_O_P_W_U_M_A_D_f_gold(int a, int b)
    { 
        if ( b == 0 ) return 1 ; 
        int answer = a ; 
        int increment = a ; 
        int i , j ; 
        for ( i = 1 ; 
        i < b ; 
        i ++ ) { 
            for ( j = 1 ; 
            j < a ; 
            j ++ ) { 
                answer += increment ; 
            } 
            increment = answer ; 
        } 
        return answer ; 
    } 
WRITE_YOU_OWN_POWER_WITHOUT_USING_MULTIPLICATION_AND_DIVISION() {}
};