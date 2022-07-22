import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class NumSum {
    public int[] twoSum(int[] nums, int target) {
    	int[] locations= {0,0};
    	for (int i=0; i<nums.length; i++) {
    		for(int j=i+1; j<nums.length; j++ ) {
    			if(nums[i]+nums[j]==target) {
    				locations[0]=i;
    				locations[1]=j;
    			}
    		}
    	}
    	
    	return locations;
    }
	public List<List<Integer>> threeSum(int[] nums) {
		List<List<Integer>> output = new ArrayList<>();

		return output;
	}

	public static void main(String [] args){
		NumSum annie = new NumSum();
		//System.out.println(annie.romanToInt("XVII"));
		int [] numbers = {-1,0,1,2,-1,-4};
		//Output: [[-1,-1,2],[-1,0,1]]
		System.out.println((annie.threeSum(numbers)).toString());
	}
}
