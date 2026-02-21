class Solution {
    public String winningPlayer(int x, int y) {
        int mem=0;
        while(x>=1&&y>=4){
            x-=1;
            y-=4;
            mem+=1;
        }
        if(mem%2==0){
            return "Bob";
        }
        return "Alice";
    }
}