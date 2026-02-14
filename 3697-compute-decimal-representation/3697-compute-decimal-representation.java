class Solution {
    public int[] decimalRepresentation(int n) {
        ArrayList<Integer> arr=new ArrayList<>();
        int count=1;
        while(n>0){
            int rem=n%10;
            if(rem!=0){
                arr.add(rem*count);
            }
            count*=10;
            n/=10;
        }
        Collections.reverse(arr);
        int[] a=new int[arr.size()];
        for(int i=0;i<arr.size();i++){
            a[i]=arr.get(i);
        }
        return a;
    }
}