import java.util.Arrays;

public class ArraysSort {

	public static void main(String[] args) {
		
		try {
			int number[] = new int[args.length];
			
			for(int i=0;i<args.length;i++) {
				number[i] = Integer.parseInt(args[i]);
			}
			Arrays.sort(number);
			for(int i=0;i<args.length;i++) {
				System.out.println(number[i]);
			}
			
		}catch(NumberFormatException e) {
			System.out.println("Input an integer number!");
		}
		
		
	}
}
