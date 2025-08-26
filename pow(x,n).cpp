#include <iostream>
#include <climits>
using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
        double power = 1.0;
        if (n == 0) return 1.0;
        long long exp = n; 
        if (exp < 0) {
            exp = -exp; 
            x = 1 / x;   
        }
        for (long long i = 0; i < exp; i++) {
            power *= x;
        }

        return power;
    }
};

int main() {
    Solution s;
    cout << s.myPow(2.0, 10) << endl;   
    cout << s.myPow(2.0, -2) << endl;  
    cout << s.myPow(2.0, 0) << endl;   
    cout << s.myPow(2.0, INT_MIN) << endl; 
    return 0;
}
