import java.util.Arrays;

public class Elementary {
    public void zeroesFirst(int [] arr){
        int size = arr.length;
        int nextZero=0;
        for (int i=0; i<size; i++){
            if(arr[i]==0){
                for (int j=i-1; j>=nextZero; j--){
                    arr[j+1]=arr[j];
                }
                arr[nextZero]=0;
                nextZero++;
            }
        }
        System.out.println(Arrays.toString(arr));
    }
    public static void main(String [] args){
        Elementary annie = new Elementary();
        int []numbers = {7,0,6,0,5,15,0,22,0,88,0};
        annie.zeroesFirst(numbers);
    }
}
