
public class DimensionalArray {

	public static void main(String[] args) {
		
		int[][][][][][][][][][] numb = new int[3][2][2][2][2][2][2][2][2][2];
		int count = 1;
			
		for(int a=0;a<numb.length;a++) {
			for(int b=0;b<numb[a].length;b++) {
				for(int c=0;c<numb[a][b].length;c++) {
					for(int d=0;d<numb[a][b][c].length;d++) {
						for(int e=0;e<numb[a][b][c][d].length;e++) {
							for(int f=0;f<numb[a][b][c][d][e].length;f++) {
								for(int g=0;g<numb[a][b][c][d][e][f].length;g++) {
									for(int h=0;h<numb[a][b][c][d][e][f][g].length;h++) {
										for(int i=0;i<numb[a][b][c][d][e][f][g][h].length;i++) {
											for(int j=0;j<numb[a][b][c][d][e][f][g][h][i].length;j++) {
												System.out.println("Index: "+a+ " "+b+" "+c+" " +d+" "+e+" "+f+" "+g+" "+h+" "+i+" "+j+ " = " +count);
												count++;
											}
											
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}	
}
