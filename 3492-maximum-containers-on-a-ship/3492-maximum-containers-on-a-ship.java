class Solution {
    public int maxContainers(int n, int w, int maxWeight) {
        int containers=n*n;
        int totweight=containers*w;
        if(totweight<=maxWeight){
            return containers;
        }
        return maxWeight/w;
    }
}