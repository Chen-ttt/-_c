#include<vector>
#include<iostream>
#include<unordered_set>
using namespace std;

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    unordered_set<int> result;
    // copy all elements from nums1 to nums_list without duplication
    unordered_set<int> nums_list(nums1.begin(), nums1.end());

    for (int i : nums2) {
        /**
         * 1. if i is found, return an iteration pointing to i in nums_list
         * 2. if not found, return an iteration pointing to the position after the last element(i.e.==returned by end())
         */
        if(nums_list.find(i) != nums_list.end()){
            result.insert(i);
        }
    }
    return vector<int>(result.begin(), result.end());
}

int main()
{
    vector<int> nums1 = {1,2,3,1};
    vector<int> nums2 = {2,3,1};
    vector<int> result = intersection(nums1, nums2);

    vector<int>::iterator v = result.begin();
    while (v!=result.end()){
        cout<<"value: "<<*v<<endl;
        v++;
    }

    return 0;
}

