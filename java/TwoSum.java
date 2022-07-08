
public class TwoSum {
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
}
