class Solution
{
public:
    vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
    {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        vector<int> result;
        int pos1 = 0, pos2 = 0;
        while (pos1 < nums1.size() && pos2 < nums2.size())
        {
            if (nums1[pos1] == nums2[pos2])
            {
                result.push_back(nums1[pos1]);
                pos1++;
                pos2++;
            }
            else if (nums1[pos1] > nums2[pos2])
            {
                pos2++;
            }
            else
                pos1++;
        }
        return result;
    }
};