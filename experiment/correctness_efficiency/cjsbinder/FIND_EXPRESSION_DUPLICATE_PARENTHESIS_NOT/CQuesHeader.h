#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class FIND_EXPRESSION_DUPLICATE_PARENTHESIS_NOT {
public:
    bool F_E_D_P_N_f_gold(string str)
    { 
        stack < char > Stack ; 
        for ( char ch : str ) { 
            if ( ch == ')' ) { 
                char top = Stack . top ( ) ; 
                Stack . pop ( ) ; 
                int elementsInside = 0 ; 
                while ( top != '(' ) { 
                    elementsInside ++ ; 
                    top = Stack . top ( ) ; 
                    Stack . pop ( ) ; 
                } 
                if ( elementsInside < 1 ) { 
                    return 1 ; 
                } 
            } 
            else Stack . push ( ch ) ; 
        } 
        return false ; 
    } 
FIND_EXPRESSION_DUPLICATE_PARENTHESIS_NOT() {}
};