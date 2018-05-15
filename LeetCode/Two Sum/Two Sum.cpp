class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> ret;
    if (nums.size() <= 1)
        return ret;


    unordered_map<int, int> myMap;
    for(int i=0; i< nums.size(); ++i)
        myMap[nums[i]] = i;
    for(int i = 0; i < nums.size(); ++i)
    {
        int rest_val = target - nums[i];
        if(myMap.find(rest_val) != myMap.end())
        {
            int index = myMap[rest_val];
            if(index == i)
                continue;
            if(index < i){
                ret.push_back(index + 1);
                ret.push_back(i + 1);
                return ret;
            }
            else{
                ret.push_back(i);
                ret.push_back(index);
                return ret;
            }
        }
        
    }
    }
};

    
