class Solution {
public:
 int binarysearch(int n){
        int s=0;
        int e=n;
        long long int mid=(s+e)/2;
        int ans=-1;
        while(s<=e){
            long long int sqaure=mid*mid;
            if(sqaure==n){
                return mid;
            }
            else if(sqaure<n){
                s=mid+1;
                ans=mid; 
           }
           else{
            e=mid-1;
           }
           mid=(s+e)/2;
        }
        return ans;
    }
    int mySqrt(int x) {
        return binarysearch(x);
    }
};