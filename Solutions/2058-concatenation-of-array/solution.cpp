class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> v = nums;
        
        for(size_t i = 0; i < nums.size(); i++)
        {
            v.push_back(nums[i]);
        }

        return v;
    }
};
