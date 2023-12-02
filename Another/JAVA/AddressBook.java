import java.util.*;
import java.util.Scanner;

class main {
	
	private int Phone;
	private String Name;
	private String Email;
	private String Address;
	
	main(int Phone, String Name, String Email, String Address){
		
		this.Phone = Phone;
		this.Name = Name;
		this.Email = Email;
		this.Address = Address;
			
	}
	public int getNumber() {
		return Phone;
	}
	public String getName() {
		return Name;
	}
	public String getEmail() {
		return Email;
	}
	public String getAddress() {
		return Address;
	}
	public String toString() {
		return Phone+" "+Name+" "+Email+" "+Address +"";
		  
	}
} 

class AddressBook{
	public static void main(String[] args) {
		
		Collection<main> Collection = new ArrayList<main>();
		
		try (Scanner scanInt = new Scanner(System.in);
				Scanner scanString = new Scanner(System.in)) {
			int select;
			do {
				System.out.println("[1] ADD ENTRY");
				System.out.println("[2] DELETE ENTRY");
				System.out.println("[3] VIEW ALL ENTRIES");
				System.out.println("[4] EDIT AN ENTRY");
				System.out.println("[5] ABO KO NA");
				System.out.println("Pick a numba : ");
				select = scanInt.nextInt();
				
				switch(select) {
					case 1:
						System.out.print("ENTER A NAME : ");
							String Name = scanString.nextLine();
						System.out.print("ENTER AN EMAIL : ");
							String Email = scanString.nextLine();
						System.out.print("ENTER A PHONE # : ");
							int Phone = scanInt.nextInt();
						System.out.print("ENTER A ADDRESS: ");
							String Address = scanString.nextLine();
							
						Collection.add(new main(Phone,Name,Email,Address));
					break;
					
					case 2:
						System.out.println("------------------------------------");
						Iterator<main> Iterate = Collection.iterator();
						while(Iterate.hasNext()) {
							main Main = Iterate.next();
							System.out.println(Main);
						}
						System.out.println("------------------------------------");
					break;
				}
			}while(select != 0);
		}

	}
}