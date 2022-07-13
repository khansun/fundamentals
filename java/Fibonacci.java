import java.util.Arrays;
public class Fibonacci {
    private long[] memo = new long[10000];
    public long getNthFib(int n) {
        if (n <= 1) {
            return n;
        }
        if (memo[n] > 1) {
            return memo[n];
        } else {
            long fib = getNthFib(n - 1) + getNthFib(n - 2);
            memo[n] = fib;
            return fib;
        }
    }
    public int [] getSequence(int n){
        int[] sequence = new int[n];
        sequence[0] = 0;
        sequence[1] = 1;
        for (int i=2; i<n;i++){
            sequence[i] = sequence[i-1]+sequence[i-2];
        }
        return sequence;
    }

    public static void main(String args[])
    {
        Fibonacci fib = new Fibonacci();
        System.out.print(Arrays.toString(fib.getSequence(40)));

    }
}