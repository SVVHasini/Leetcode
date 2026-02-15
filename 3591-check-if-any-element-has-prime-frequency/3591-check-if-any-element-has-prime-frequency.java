class Solution {
    public boolean checkPrimeFrequency(int[] nums) {
        HashMap<Integer,Integer> m=new HashMap<Integer,Integer>();
        for(int i=0;i<nums.length;i++){
            if (m.containsKey(nums[i])) {
                m.put(nums[i], m.get(nums[i]) + 1);
            } else {
                m.put(nums[i], 1);
            }
        }
        for(int val:m.values()){
            if(isPrime(val)){
                return true;
            }
        }
        return false;
    }
    public static boolean isPrime(int n){
        int count=0;
        if(n<=1){
            return false;
        }
        for(int i=2;i<=(n/2);i++){
            if(n%i==0){
                count++;
            }
        }
        if(count!=0){
            return false;
        }
        return true;
    }
}