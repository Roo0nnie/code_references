
public class Duran2cAct5 {

	public static void main(String[] args) {
		
		int n1, n2;
        n1 = Integer.parseInt(args[0]);
        
        try {
            if (args.length == 1) {
            	int i;
            	int j;
            	n2 = Integer.parseInt(args[0]);
            	for ( i = 1; i < n1 + 1; i++) {
            		for ( j = 1; j < n2 + 1; j++) {
                        if (j == n2) {
                            System.out.printf("  %2d  \n", (i * j));
                        } else {
                            System.out.printf("  %2d", (i * j));
                        }
                    }
                }
            } else {
            	int i;
            	int j;
            	n2 = Integer.parseInt(args[1]);
            	for ( i = 1; i < n1 + 1; i++) {
            		for (j = 1; j < n2 + 1; j++) {
                        if (j == n2) {
                            System.out.printf("  %2d  \n", (i * j));
                        } else {
                            System.out.printf("  %2d", (i * j));
                        }
                    }

                }
            }
        } catch (Exception e) {
            System.out.println("Error!");
        }

	}

}
