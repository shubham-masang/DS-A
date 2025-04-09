// Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

 

// Example 1:

// Input: nums = [1,2,3,1]

// Output: true

// Explanation:

// The element 1 occurs at the indices 0 and 3.

// Example 2:

// Input: nums = [1,2,3,4]

// Output: false

// Explanation:

// All elements are distinct.

class Solution {
public:
    bool containsDuplicate(vector<int>& v) {
        // sort(v.begin(), v.end()); //TC: O(nlogn) SC: O(1)
        // int n = v.size();
        // int i=0,j=1;
        // while(j<n){
        //     if(v[i]==v[j]) return true;
        //     i++;
        //     j++;
        // }
        // return false;
        int n=v.size();
        unordered_set<int> hashset; TC: O(n) SC: O(n)
        for(int i=0;i<n;i++){
            if(hashset.contains(v[i])) return true;
            hashset.insert(v[i]);
        }
        return false;
    }
};
