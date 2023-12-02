

public class menu {
    public static void main(String[] args)
    {
        String name = "R---onnie";
        String name1 = "";
        
        if(name.contains("-")) {
        	name1 = name.replace("-", "");
        	System.out.println("- has been removed in the word "+name1);
        } else {
        	System.out.println("It has no negative sign.");
        }
    }
}
