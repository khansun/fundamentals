
class testTwoSum {
	public static void main(String[] args) {
		TwoSum sum = new TwoSum();
		int[] numbers = {3,3};
		int target = 6;
		int[] sums = sum.twoSum(numbers, target);
		System.out.println(sums[0]+", "+sums[1]);
	}

} 