class Solution {
    public int countGoodSubstrings(String s) {
        if(s.length()<3){
            return 0;
        }
        int i=0,j=2;
        int count=0;
        while(j<s.length()){
            boolean a=s.charAt(i)!=s.charAt(i+1)?true:false;
            boolean b=s.charAt(i+1)!=s.charAt(j)?true:false;
            boolean c=s.charAt(i)!=s.charAt(j)?true:false;

            if(a&&b&&c){
                count++;
            }
            i++;
            j++;
        }
        return count;
    }
}