#include<vector>
#include<iostream>
#include<unordered_map>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int,int> hashMap;
    for(int i=0; i<nums.size(); i++){
        auto iter = hashMap.find(target-nums[i]);
        /**
         * 1. if i is found, return an iteration pointing to i in nums_list
         * 2. if not found, return an iteration pointing to the position after the last element(i.e.==returned by end())
         */
        if(iter != hashMap.end()){
            return vector<int>{iter->second, i};
        }
        hashMap.insert(pair<int,int>{nums[i], i}); // not found, insert current pair
    }
    return vector<int>{};
}

int main()
{
    vector<int> nums = {2,7,6,7,3};
    vector<int> result = twoSum(nums, 9);

    vector<int>::iterator v = result.begin();
    while (v!=result.end()){
        cout<<"value: "<<*v<<endl;
        v++;
    }

    return 0;
}

