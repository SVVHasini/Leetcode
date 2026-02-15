class Solution {
    public int smallestIndex(int[] nums) {
        for(int i=0;i<nums.length;i++){
            int numsum=NumSum(nums[i]);
            if(numsum==i){
                return i;
            }
        }
        return -1;
    }
    public static int NumSum(int n){
        int sum=0;
        while(n>0){
            int rem=n%10;
            sum+=rem;
            n/=10;
        }
        System.out.println(sum);
        return sum;
    }
}