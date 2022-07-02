import java.util.*;  
class Solution {
    public int romanToInt(String s) {
        Dictionary romans = new Hashtable();  
        romans.put('I', 1);
        romans.put('V', 5);
        romans.put('X', 10);
        romans.put('L', 50);
        romans.put('C', 100);
        romans.put('D', 500);
        romans.put('M', 1000);
        //"MDCXCV"
        int len = s.length();
        int total = 0, number=0, numberNext = 0;

        for(int i=0; i<len; i++) {
        	number = (int) romans.get(s.charAt(i));
            try {
            	numberNext = (int) romans.get(s.charAt(i+1));
            } catch (Exception e) {
            	//System.out.println(e);
            }
        	
        	if(number < numberNext) {
        		total = total+(numberNext-number);
        		i++;
        		numberNext=0;
        	}
        	else {
        		total = total+number;
        	}
        }
        return total;

    }
}