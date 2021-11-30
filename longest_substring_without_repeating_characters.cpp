class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        std::vector<int> storage(128,-1);
        int max_len = 0;
        int left = 0;
        int right = 0;
        
        while(right < s.size())
        {  
            int ascii = static_cast<int>(s[right]);
            if(storage[ascii] == -1 || storage[ascii] < left)
            {
                //substring 길이 갱신화
                int length = right - left + 1;
                if(max_len < length)
                {
                    max_len = length;
                }            
            }
            else
            {
                left =  storage[ascii] + 1;   
            }
            storage[ascii]  = right;
            ++right;
        }
        
        return max_len;
    }
};
