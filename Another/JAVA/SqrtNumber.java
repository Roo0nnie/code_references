public class SqrtNumber {

	public static void main(String[] args) {
		
		try {
			double num1 = Double.parseDouble(args[0]);
			double num2 = Math.pow(num1, 0.5);
			
			System.out.println(num2);
			
		}catch(NumberFormatException e) {
			System.out.println("Try to input a number!");
		}
	}
}
