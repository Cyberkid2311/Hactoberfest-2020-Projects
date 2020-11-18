package arrays;

import java.util.Scanner;

class matrix{
	int[][] mat1= new int[3][3];
	int[][] mat2= new int[3][3];

	Scanner sc = new Scanner(System.in);
	public void get() {
		System.out.println("Enter matrix:");
		for(int i=0;i<3;i++)
		{
			for(int j=0;j<3;j++) {
				int a=sc.nextInt();
				mat1[i][j]=a;
				mat2[j][i]=a;}
		}
		
		}
		public void transpose() {
			for(int i=0;i<3;i++)
			{
				for(int j=0;j<3;j++) {
					System.out.print(mat2[i][j]+" ");
				}
				System.out.println();
					
					
			}
		}
		
		}
public class TransposeofMatrixx {

	public static void main(String[] args) {
		matrix obj = new matrix();
		obj.get();
		obj.transpose();
	}

}
