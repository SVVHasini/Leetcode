class Solution {
    public int smallestNumber(int n) {
        if(setBits(n)){
            return n;
        }
        n+=1;
        while(!setBits(n)){
            n+=1;
        }
        return n;
    }
    public static boolean setBits(int n){
        String j=Integer.toBinaryString(n);
        for(int i=0;i<j.length();i++){
            if(j.charAt(i)=='0'){
                return false;
            }
        }
        return true;
    }
}