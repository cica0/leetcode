#include <iostream>

using namespace std;

class Solution {
public:
    int trailingZeroes(int n) {
//        int ten=0, five=0, two=0;
        int five=0;
        while(n) {
           five += n/5;
          n = n/5; 
        }
        cout << "five :" << five << endl;
        return five;
        
    }
};

int main()
{
    Solution s;
    int ret = s.trailingZeroes(25);
    cout << "ret=" << ret << endl;
    return 0;
}
