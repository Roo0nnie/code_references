public class Toyota extends Car{
	public Toyota(){
		System.out.println("Im here in Toyota Constructor");
	}
	public Toyota(int y){
		
		int sum =0;
		sum = y + 100;
		System.out.println("Sum" + sum);
	}
}