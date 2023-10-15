//using binary search + divide&conquer
double findMedianSortedArrays(vector<int>&nums1,vector<int>&nums2){
	int s = nums1.size()+nums2.size();
	
	vector<int>vec(s);
	merge(nums1.begin(),nums1.end(),nums2.begin(),nums2.end(),v.begin(),v.end());
	
	double median =0;
	int m = s/2;
	if(s%2==0){
		median = (vec[m]+vec[m-1]);
		return median/2;
	}
	else{
		median = vec[s/2];
	}
	return median;
}