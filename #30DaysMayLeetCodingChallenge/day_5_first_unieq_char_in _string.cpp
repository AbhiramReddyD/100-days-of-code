class Solution {
public:
    int firstUniqChar(string s) {
        int j;
        int a[26]={0};
        for(j=0;j<s.size();j++)
 	        a[s[j]-97]+=1;    
        for(j=0;j<s.size();j++)
        {
            if(a[s[j]-97]==1)
                return j;
        }
        return -1;
    }
};
