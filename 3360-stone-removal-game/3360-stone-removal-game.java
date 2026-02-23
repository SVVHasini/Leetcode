class Solution {
    public boolean canAliceWin(int n) {
        int turn=10;
        while(turn>0 && n>=turn){
            n-=turn;
            turn-=1;
        }
        if(turn%2==0) {return false;}
        else {return true;}
    }
}