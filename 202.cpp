#include <iostream>
#include <tgmath.h>
#include <set>
using namespace std;
/*
Write an algorithm to determine if a number is "happy".

A happy number is a number defined by the following process: Starting with any positive integer, replace the number by the sum of the squares of its digits, and repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1. Those numbers for which this process ends in 1 are happy numbers.
*/
class Solution {
public:
    bool isHappy(int n) {
        int sum = 0;
        set<int> s;
        while(1) {
            sum = 0;
            while(n) {
                sum += pow(n%10, 2);
                n = n/10;
            }
            cout << sum << endl;
            if (sum == 1)
                return true;
            if (s.find(sum)!= s.end())
                return false;
            else
                s.insert(sum);
            n=sum;
        }
    }
};

int main()
{
    Solution s;
    cout << s.isHappy(1111111);
}
