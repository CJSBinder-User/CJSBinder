#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class DYCK_PATH {
public:
    int D_P_f_gold(unsigned int n)
    { 
        int res = 1 ; 
        for ( int i = 0 ; 
        i < n ; 
        ++ i ) { 
            res *= ( 2 * n - i ) ; 
            res /= ( i + 1 ) ; 
        } 
        return res / ( n + 1 ) ; 
    } 
DYCK_PATH() {}
};