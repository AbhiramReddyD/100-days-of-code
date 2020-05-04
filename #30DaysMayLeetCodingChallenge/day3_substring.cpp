class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        if(magazine.length()<ransomNote.length())
            return false;
        int j;
        int a[26]={0};
        int b[26]={0};
        for(j=0;j<ransomNote.size();j++)
 	        a[ransomNote[j]-97]+=1;
        for(j=0;j<magazine.size();j++)
 	        b[magazine[j]-97]+=1;
        
        for(j=0;j<26;j++)
        {
            if(a[j]>0)
            {
                if(b[j]==0 || b[j]<a[j])
                    return false;
            }
        }
        return true;
    }
};
