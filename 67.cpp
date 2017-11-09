#include <iostream>
#include <algorithm>
#include <sstream>
#include <string>
#include <vector>

using namespace std;
class Solution {
public:
    string addBinary(string a, string b) {
        int a_i = a.size()-1;
        int b_i = b.size()-1;
        int carry = 0;
        string result;
        while(a_i >= 0 && b_i >= 0)
        {
            result += ((a[a_i]-'0'+b[b_i]-'0'+carry)%2)+'0';
            carry = ((a[a_i]-'0'+b[b_i]-'0'+carry)/2);
            cout << "carry :" << carry << endl;
            --a_i;
            --b_i;
        }
        while(a_i>=0) {
            result+=(a[a_i]-'0'+carry)%2+'0';
            carry = ((a[a_i]-'0'+carry)/2);
            --a_i;
        }
        while(b_i>=0) {
            result+=(b[b_i]-'0'+carry)%2+'0';
            carry = ((b[b_i]-'0'+carry)/2);
            --b_i;
        }      
        if(carry)
            result+='1';
        reverse(result.begin(),result.end());
        return result;
    }
};

int main()
{
    Solution s;
    cout << s.addBinary("0", "0");
}

