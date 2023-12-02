public class ClassRecord{
	//attribute delcaration
	private String name = "";
	private String address = "";
	private int age = 0;
	private int mathGrade = 0;
	private int englishGrade = 0;
	private int scienceGrade = 0;
	private double average = 0.0;
	private static int count = 50;
	
	
	//constructor
	public ClassRecord() {
		System.out.println("Hello WOrld!");
	}
	
	
	//methods
	//accessor
	public String getName(){
		return name;
	}
	public String getAddress(){
		return address;
	}
	public int getAge(){
		return age;
	}
	public int getMathGrade(){
		return mathGrade;
	}
	public int getEnglishGrade(){
		return englishGrade;
	}
	public int getScienceGrade(){
		return scienceGrade;
	}
	public double getAverage(){
		int sum;
		sum = mathGrade + scienceGrade + englishGrade;
		average = sum / 3;
		return average;
	}
	
	public String getResult(){
		if(average > 74){
			return "Passed";
		}else{
			return "Sorry You Failed!";
		}
		
	}
	//mutator
	public static int getCount(){
		return count;
	}
		public void setName(String temp){
		name = temp;
	}
		public void setAddress(String temp){
		address = temp;
	}
		public void setAge(int temp){
		age = temp;
	}
		public void setMathGrade(int temp){
		mathGrade = temp;
	}
		public void setScienceGrade(int temp){
		englishGrade = temp;
	}
		public void setEnglishGrade(int temp){
		englishGrade = temp;
	}
	

	
	
}



