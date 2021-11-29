//https://leetcode.com/problems/two-sum/
//leetcode two sum
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v = {0,0};
        std::map<int,int> m;
        for(int i =0; i< nums.size(); ++i)
        {
            m.insert(std::pair<int,int>((target - nums[i]),i));
        }
        for(int i = 0; i < nums.size();++i)
        {
            std::map<int,int>::iterator it = m.find(nums[i]);
            //edge case
            if(it->second == i)continue;
            
            if(it != m.end())
            {
                v = {i, it->second};
                break;
            }
        }
        return v;
    }
    //brute force
    /*for(int j = i+1; j < nums.size();++j)
    {
        int sum = nums[i] + nums[j];
        if(target == sum)
        {
          v = { i , j };
          return v;
        }
    }*/
};
