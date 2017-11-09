#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;
class Solution {
public:
    string countAndSay(int n) {
        vector<string> result={"","1","11","21","1211","111221"};
        stringstream ss;
        for (int k=6; k<n; ++k) {
            int bit_num = 0;
            string temp = result[k-1];
            cout << temp <<endl;
            unsigned int i=0,j=i+1; 
            string result_temp; 
            while(i<temp.length() && j < temp.length())
            {
                result_temp.clear();
                string strtemp;
                ss.clear();
                char now = temp[i];
                cout << "now is:" << now  << "i is:" << i<<endl;
                cout << "length is:" << temp.length() <<endl;
                while(j<temp.length() && now == temp[j])
                {
                    cout << "temp:" << temp[j] << "j is:" << j<<endl;
                    ++j;
                }
                cout << "j is:" << j<<endl;
                bit_num = j-i+1;
                cout << "bit_num :" << bit_num << endl;
                ss << bit_num;
                ss >> strtemp;
                result_temp = result_temp + strtemp;
                i = j+1;
            }
            result.push_back(result_temp);

        }
        return result[n];
        
            
    }
};
int main()
{
    Solution s;
    cout << s.countAndSay(9);
}

