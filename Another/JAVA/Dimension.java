
public class Dimension {

	public static void main(String[] args) {
		
		String name[][][] = {{{"day","day","day"},{"nay","nay","nay"},{"nay","nay","nay"}},
							{{"day","day","day"},{"nay","nay","nay"},{"nay","nay","nay"}},
							{{"day","day","day"},{"nay","nay","nay"},{"nay","nay","nay"}}};

		for(int i=0;i<name.length;i++) {
			System.out.println();
			for(int j=0;j<name[i].length;j++) {
				System.out.println();
				for(int k=0;k<name[i][j].length;k++) {
					System.out.print(name[i][j][k]);
				}
			}
		}
	}
}
