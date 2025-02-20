#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class CHECK_IF_X_CAN_GIVE_CHANGE_TO_EVERY_PERSON_IN_THE_QUEUE {
public:
    int C_I_X_C_G_C_T_E_P_I_T_Q_f_gold(int notes [], int n)
    { 
        int fiveCount = 0 ; 
        int tenCount = 0 ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) { 
            if ( notes [ i ] == 5 ) fiveCount ++ ; 
            else if ( notes [ i ] == 10 ) { 
                if ( fiveCount > 0 ) { 
                    fiveCount -- ; 
                    tenCount ++ ; 
                } 
                else return 0 ; 
            } 
            else { 
                if ( fiveCount > 0 && tenCount > 0 ) { 
                    fiveCount -- ; 
                    tenCount -- ; 
                } 
                else if ( fiveCount >= 3 ) { 
                    fiveCount -= 3 ; 
                } 
                else return 0 ; 
            } 
        } 
        return 1 ; 
    } 
CHECK_IF_X_CAN_GIVE_CHANGE_TO_EVERY_PERSON_IN_THE_QUEUE() {}
};