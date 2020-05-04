class Solution {
public:
    int findComplement(int num) {
        
        int bin = 0,power = 1;
        while (num != 0) 
        {
            bin+= ((num%2)^1)*power;
            num>>=1;
            power<<=1;
        }
        return bin;       
    }
};
