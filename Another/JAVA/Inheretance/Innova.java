public class Innova extends Toyota{
	
	public String name = "";
	
	public Innova(){
		System.out.println("Im here in Innova Constructor");
	}
	public Innova(String name){
		System.out.println("Im here in Innova Constructor" + name);
	}
	public Innova(int y){
		//super(y);
		System.out.println("Im here in Innova Constructor with pass value of " + y);
	}
	
	
	public String getName(){
		
		return name;
	}
}