class Solution {
    public int getLeastFrequentDigit(int n) {
        HashMap<Integer, Integer> freq = new HashMap<>();
        while (n > 0) {
            int x = n % 10;
            if (freq.containsKey(x)) {
                freq.put(x, freq.get(x) + 1);
            } else {
                freq.put(x, 1);
            }
            n /= 10;
        }
        int mini=100000;
        int ret=0;
        for(Integer key : freq.keySet()){
            if(freq.get(key)<mini){
                mini=freq.get(key);
                ret=key;
            }
        }
        return ret;
    }
}