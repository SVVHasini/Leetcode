class Solution {
    public int maxLength(int[] nums) {
        int n = nums.length;
        int maxLen = 1;

        for(int i = 0; i < n; i++){
            long prod = 1;
            int gcd = 0;
            long lcm = 1;

            for(int j = i; j < n; j++){
                prod *= nums[j];

                gcd = (gcd == 0) ? nums[j] : gcd(gcd, nums[j]);

                lcm = lcm(lcm, nums[j]);

                if(prod == gcd * lcm){
                    maxLen = Math.max(maxLen, j - i + 1);
                }
            }
        }

        return maxLen;
    }

    private int gcd(int a, int b){
        return b == 0 ? a : gcd(b, a % b);
    }

    private long lcm(long a, long b){
        return (a * b) / gcd((int)a, (int)b);
    }
}
