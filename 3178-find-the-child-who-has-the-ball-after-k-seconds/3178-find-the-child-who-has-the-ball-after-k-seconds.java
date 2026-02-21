class Solution {
    public int numberOfChild(int n, int k) {
        n-=1;
        int q=k/n;
        int m=k%n;
        if(q%2!=0){
            return n-m;
        }
        return m;
    }
}