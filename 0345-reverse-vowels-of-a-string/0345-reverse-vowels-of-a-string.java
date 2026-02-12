class Solution {
    public String reverseVowels(String s) {
        int i=0;
        int j=s.length()-1;
        StringBuilder sb = new StringBuilder(s);

        while(i<j){
            if(s.charAt(i)!='a'&&s.charAt(i)!='A'&&s.charAt(i)!='e'&&s.charAt(i)!='E'&&s.charAt(i)!='i'&&s.charAt(i)!='I'&&s.charAt(i)!='o'&&s.charAt(i)!='O'&&s.charAt(i)!='u'&&s.charAt(i)!='U'){
                i++;
                continue;
            }
            if(s.charAt(j)!='a'&&s.charAt(j)!='A'&&s.charAt(j)!='e'&&s.charAt(j)!='E'&&s.charAt(j)!='i'&&s.charAt(j)!='I'&&s.charAt(j)!='o'&&s.charAt(j)!='O'&&s.charAt(j)!='u'&&s.charAt(j)!='U'){
                j--;
                continue;
            }
            
            sb.setCharAt(i,s.charAt(j));
            sb.setCharAt(j,s.charAt(i));
            i++;
            j--;
        }
        s=sb.toString();
        return s;
    }
}