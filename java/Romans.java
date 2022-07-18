import java.util.*;  
class Romans {
    public int romanToInt(String s) {
        Dictionary romans = new Hashtable();  
        romans.put('I', 1);
        romans.put('V', 5);
        romans.put('X', 10);
        romans.put('L', 50);
        romans.put('C', 100);
        romans.put('D', 500);
        romans.put('M', 1000);
//
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

    public String intToRoman(int num) {
        HashMap<Integer, String> romans = new HashMap<>();
        romans.put(1, "I");
        romans.put(4, "IV");
        romans.put(5, "V");
        romans.put(9, "IX");
        romans.put(10, "X");
        romans.put(40, "XL");
        romans.put(50, "L");
        romans.put(90, "XC");
        romans.put(100, "C");
        romans.put(400, "CD");
        romans.put(500, "D");
        romans.put(900, "CM");
        romans.put(1000, "M");

        int [] keys = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        String roman = "";
        while(num>0) {
            System.out.println(num);
            for (int i = 0; i < keys.length; ) {

                if (num >= keys[i]) {
                    num = num - keys[i];
                    roman+=romans.get(keys[i]);
                    i=0;
                }
                else i++;

            }
        }

        return roman;

    }
    public static void main(String [] args){
        Romans annie = new Romans();
        //System.out.println(annie.romanToInt("XVII"));
        System.out.println(annie.intToRoman(2000));
    }

}
