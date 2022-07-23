import java.util.*;
public class IP {
    public String validIPAddress(String queryIP) {
        return "s";
    }
    void arraEq(){
        Scanner sc = new Scanner(System.in);
      /*
      int n      = sc.nextInt();        // read input as integer
      long k     = sc.nextLong();       // read input as long
      double d   = sc.nextDouble();     // read input as double
      String str = sc.next();           // read input as String
      String s   = sc.nextLine();       // read whole line as String
      */
        int  tests;
        tests = sc.nextInt();
        for (int j = 0; j < tests; j++)
        {
            int n, eq=0;
            n = sc.nextInt();

            int [] arr = new int[n];


            for (int i = 0; i < n; i++)
            {
                arr[i] = sc.nextInt();
                if ( i>0) if(arr[i]==arr[i-1]){
                    eq++;
                    i++;
                }
            }
            System.out.println(eq);
        }
    }
    public static void main(String [] args){
        IP ipx = new IP();
        ipx.arraEq();
//        System.out.println(ipx.validIPAddress("192.168.1.1"));
    }
}
