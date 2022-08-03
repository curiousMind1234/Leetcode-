/*
 Given two integer arrays nums1 and nums2, return an array of their intersection. 
 Each element in the result must appear as many times as it shows in both arrays and you may return the result in any order.

Example 1:

Input: nums1 = [1,2,2,1], nums2 = [2,2]
Output: [2,2]

*/
vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
    int i = 0;
    int j = 0;
    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());
    vector<int> result;

    while(i < nums1.size() && j < nums2.size())
    { 
        // if number in the list 1 is smaller than number in the list 2,
        // then increment list 1 index
        if(nums1[i] < nums2[j])
        {
            i++;
        }
        // vice versa
        else if(nums1[i] > nums2[j])
        {
            j++;
        }
        // if the values in the current indecies are the same,
        // then add to the result list
        else
        {
            result.push_back(nums1[i]);
            i++;
            j++;
        }
    }

    return result;
}
