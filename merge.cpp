class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<long long> temp(m+n);
        int i = 0, j = 0, index = 0;
        while(i < m && j < n) {
            if(nums1[i] <= nums2[j]) {
                temp[index] = nums1[i];
                i++, index++;
            }
            else {
                temp[index] = nums2[j];
                j++, index++;
            }
        }

        while(i < m) {
            temp[index] = nums1[i];
            i++, index++;
        }
        while(j < n) {
            temp[index] = nums2[j];
            j++,index++;
        }

        for(int i = 0; i < n+m; i++) {
            nums1[i] = temp[i];
            // else nums2[i-n] = temp[i];
        }
    }
};
