#include<string>
#include<vector>
using namespace std;
class TestClass{
public:
    TestClass(int v){
        val = v;
    }
    int Method1(double v) {return val + int(v);}
    int Method2(bool v) {return v?val+1:val-1;}
private:
    int val;
};

string Function1(vector<int>& v,string s){
    string tmp = "";
    for(int i : v){
        tmp += to_string(i) + " ";
    }
    return tmp + s;
}

