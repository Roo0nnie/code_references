import java.util.Scanner;

public class ClassRecordMain{
	public static void main(String args[]){
		Scanner dataIn = new Scanner(System.in);
		ClassRecord objStud = new ClassRecord();
		
		System.out.println("Enter your name");
			objStud.setName(dataIn.nextLine());
		System.out.println("Enter your address");
			objStud.setAddress(dataIn.nextLine());
		System.out.println("Enter your age");
			objStud.setAge(dataIn.nextInt());
		System.out.println("Enter your math grade");
			objStud.setMathGrade(dataIn.nextInt());
		System.out.println("Enter your science grade");
			objStud.setScienceGrade(dataIn.nextInt());
		System.out.println("Enter your english grade");
			objStud.setEnglishGrade(dataIn.nextInt());
			
		System.out.println("Name : " + objStud.getName());
		System.out.println("Address : " + objStud.getAddress());
		System.out.println("Your average grade is : " + objStud.getAverage());
		System.out.println("Status : " + objStud.getResult());
		
		System.out.println("Count " + ClassRecord.getCount());
		
	}
}