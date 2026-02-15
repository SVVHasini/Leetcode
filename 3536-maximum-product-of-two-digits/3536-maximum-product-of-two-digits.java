class Solution {
    public int maxProduct(int n) {
        ArrayList<Integer> a=new ArrayList<>();
        while(n>0){
            int rem=n%10;
            a.add(rem);
            n/=10;
        }
        int max=-10000;
        for(int i=0;i<a.size();i++){
            for(int j=i+1;j<a.size();j++){
                if(max<((a.get(i))*(a.get(j)))){
                    max=(a.get(i))*(a.get(j));
                }
            }
        }
        return max;
    }
}