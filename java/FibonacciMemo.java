public class FibonacciMemo {
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
}