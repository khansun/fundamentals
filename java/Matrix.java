import java.util.Arrays;

public class Matrix {
    public void multipy(int [] [] matA, int [] [] matB){
        int [] [] matX = new int[3][3];
        if(matA[0].length!= matB.length){
            System.out.println("Dimensions don't match");
        }
        else{
            System.out.println(Arrays.toString(matX));
        }
    }
    public static void main(String [] args){
        Matrix neo = new Matrix();
        int [] [] matA = {{1,3,4}, {3,5,1}};
        int [] [] matB = {{1,3}, {3,5,1}};
        neo.multipy( matB, matA);
    }
}
