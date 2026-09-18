class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int arr[201] = {0,};
        int i=0;
        int j=0;
        int k=0;
        
        while(i<m && j<n) {
            if(nums1[i] <= nums2[j]) {
                arr[k++] = nums1[i++];
            }
            else if(nums1[i] > nums2[j]) {
                arr[k++] = nums2[j++];
            }
        }
        //남은 배열 추가
        while(i<m){
            arr[k++] = nums1[i++];
        }
        while(j<n){
            arr[k++] = nums2[j++];
        }

        //arr 배열을 nums배열에 복사
        for(int i=0;i<m+n;i++){
            nums1[i] = arr[i];
        }
        
    }
};