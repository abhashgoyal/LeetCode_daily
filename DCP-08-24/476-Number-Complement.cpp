class Solution {
public:
    int findComplement(int num) {
       int i = 0, j = 0;
        while (num) {
            int sum =num & 1;
            if (!sum)
                j +=pow(2, i);
            num = num >> 1;
            i++;
        }
        return j;  
    }
};