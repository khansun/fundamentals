import java.util.Random;
public class RandCirclePi {
    public double piValue(int points){
        int circlePoints = 0;
        int squarePoints = 0;
        for (int i=0; i<=points; i++){
            double x = new Random().nextDouble(0.0, 1.0);
            double y= new Random().nextDouble(0.0, 1.0);
            if((x*x+y*y)<=1){
                circlePoints += 1;
                squarePoints += 1;
            }
            else{
                squarePoints += 1;
            }
        }
        circlePoints *= 4;
        return (double) circlePoints/squarePoints;
    }

}
