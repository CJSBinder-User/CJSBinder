#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class PYTHAGOREAN_QUADRUPLE {
public:
    bool P_Q_f_gold(int a, int b, int c, int d)
    { 
        int sum = a * a + b * b + c * c ; 
        if ( d * d == sum ) return true ; 
        else return false ; 
    } 
PYTHAGOREAN_QUADRUPLE() {}
};