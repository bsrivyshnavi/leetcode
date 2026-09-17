class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        vector<int> merge;
        for(int i=0;i<n;i++){
            merge.push_back(nums1[i]);
        }
        for(int i=0;i<m;i++){
            merge.push_back(nums2[i]);
        }
        sort(merge.begin(),merge.end());
        int total = merge.size();
        if(total%2==1){
            return static_cast<double>(merge[total/2]);
        }
        else{
            int midd = merge[total/2-1];
            int midd1 = merge[total/2];
            return (static_cast<double>(midd)+static_cast<double>(midd1)) / 2.0;
        }
    }
};