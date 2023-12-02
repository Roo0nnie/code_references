
public class ComputeThePower {

	public static void main(String[] args) {
		
		int base = 5; 
		int i = 1;
		int exponent = 3;
		int power = 1;
		
		//for loop is a posttest loop.
		for(i = 1;i<=exponent;i++) {
			power = power*base;
		}System.out.println(power);
		
	}

}
