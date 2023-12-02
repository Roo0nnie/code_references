import java.util.Random;

public class Rolling_Dice {

	public static void main(String[] args) {
		
		Random Rolling_Dice = new Random();
		int x = Rolling_Dice.nextInt(10);
		
		System.out.println("You rolled a: " + x);

		System.out.println("I love you, Lyn.");	
	}
}