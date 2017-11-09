class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t result = 0;
        uint32_t n_temp = 1;
        while(n_temp) {
            result = (result <<1)|(n%2);
            n = n>>1;
            n_temp = n_temp<<1;
        }
        return result;


        
    }
};
