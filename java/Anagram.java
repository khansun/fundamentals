import java.util.Arrays;
import java.util.Hashtable;

public class Anagram {
    public boolean isAnagram(String s, String t) {
        if(s.length()!=t.length()){
            return false;
        }
        else {
            int length = s.length();
            int matchCount = 0;
            for (int i=0; i<length; i++ ){
                for(int j=0; j<t.length(); j++){
                    if(s.charAt(i)==t.charAt(j)){
                        t=t.substring(0,j)+t.substring(j+1);
                        matchCount+= 1;
                        break;
                    }
                }
            }
            return matchCount == length;
        }
    }
    public boolean isAnagramS(String s, String t) {
        char [] charS = s.toCharArray();
        char [] charT = t.toCharArray();
        Arrays.sort(charS);
        Arrays.sort(charT);
        int length = s.length();
        if(t.length()!=length){
            return false;
        }
        for (int i=0; i<length; i++){
            if(charS[i]!=charT[i]) return false;
        }
        return true;
    }
    public boolean isAnagramSS(String s, String t) {
        int length = s.length();
        Hashtable alphabets = new Hashtable();
        alphabets.put('a', 0);
        alphabets.put('b', 1);
        alphabets.put('c', 2);
        alphabets.put('d', 3);
        alphabets.put('e', 4);
        alphabets.put('f', 5);
        alphabets.put('g', 6);
        alphabets.put('h', 7);
        alphabets.put('i', 8);
        alphabets.put('j', 9);
        alphabets.put('k', 10);
        alphabets.put('l', 11);
        alphabets.put('m', 12);
        alphabets.put('n', 13);
        alphabets.put('o', 14);
        alphabets.put('p', 15);
        alphabets.put('q', 16);
        alphabets.put('r', 17);
        alphabets.put('s', 18);
        alphabets.put('t', 19);
        alphabets.put('u', 20);
        alphabets.put('v', 21);
        alphabets.put('w', 22);
        alphabets.put('x', 23);
        alphabets.put('y', 24);
        alphabets.put('z', 25);
        
        if(t.length()!=length){
            return false;
        }
        int [] alphaSum = new int[26];
        for (int i=0; i< length; i++){
            alphaSum[(int) alphabets.get(s.charAt(i))]+=1;
            alphaSum[(int) alphabets.get(t.charAt(i))]-=1;
        }
        for (int i=0; i<26; i++) if(alphaSum[i]!=0) return false;
        return true;
    }
    public static void main(String [] args){
        Anagram annie = new Anagram();
        System.out.println(annie.isAnagram("aacc", "cacc"));
    }

}
