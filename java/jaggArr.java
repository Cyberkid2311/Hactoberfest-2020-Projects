package inheritanceOverloading;

public class jaggArr {
public static void main(String[] args) {
//example of jagged array
	int[][] jaggedArr = new int[3][];
	jaggedArr[0] = new int[] {1, 2};
	jaggedArr[1] = new int[] {3, 4, 5};
	jaggedArr[2] = new int[] {6, 7, 8, 9};
	for (int i=0;i<jaggedArr.length;i++)
	{
		for(int j=0;j<jaggedArr[i].length;j++)
			System.out.print(jaggedArr[i][j]+" ");
		System.out.println();
	}
	System.out.println();
	//	example of multidimensional array
	int[][] contents=new int[2][2];
	contents[0][0] = 1;
	contents[0][1] = 2;
	contents[1][0] = 4;
	contents[1][1] = 5;

	for (int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
			System.out.print(contents[i][j]+" ");
		System.out.println();
	}
}
}