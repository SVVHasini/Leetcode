class Solution {
    public long minCuttingCost(int n, int m, int k) {
        long ncost=0;
        long mcost=0;
        long cost;
        if(n>k){
            long diff1=n-k;
            long diff2=n-diff1;
            ncost=diff1*diff2;
        }
        if(m>k){
            long diff1=m-k;
            long diff2=m-diff1;
            mcost=diff1*diff2;
        }
        cost=ncost+mcost;
        return cost;
    }
}