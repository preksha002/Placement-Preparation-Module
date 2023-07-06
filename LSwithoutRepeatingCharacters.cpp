class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        int maxLen = 0,windowStart = 0;
        unordered_map<char,int> charFreq;
        for(int windowEnd=0;windowEnd<s.size();windowEnd++){
            char rightChar = s[windowEnd];
            charFreq[rightChar]++;
            while(charFreq.size()<windowEnd-windowStart+1){
                char leftChar = s[windowStart];
                charFreq[leftChar]--;
                if(charFreq[leftChar]==0){
                    charFreq.erase(leftChar);
                }
                windowStart++;
            }
            maxLen = max(maxLen,windowEnd-windowStart+1);
            
        }
        return maxLen;
        
    }
};