class Solution {
    public int minimumFlips(int n) {
        String binary=Integer.toBinaryString(n);
        StringBuilder sb=new StringBuilder(binary);
        sb.reverse();
        String reversedbinary = sb.toString();
        int count=0;
        for(int i=0;i<binary.length();i++){
            if(binary.charAt(i)!=reversedbinary.charAt(i)){
                count++;
            }
        }
        return count;
    }
}