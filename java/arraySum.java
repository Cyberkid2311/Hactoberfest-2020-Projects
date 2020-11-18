package inheritanceOverloading;



import java.util.Scanner;

public class arraySum {
	public static void main(String[] args) {
		Scanner in =new Scanner(System.in);
		System.out.println("Enter number of elements");
		int n=in.nextInt();
		System.out.println("enter the elements: ");
		int[] Array=new int[n];
		for(int i=0;i<n;i++)
			Array[i]=in.nextInt();
		System.out.println("The sum of the elements of given array are: "+ add(Array));
	}
	public static int add(int[] array) {
		int sum=0;
		for(int i=0;i<array.length;i++)
			sum +=array[i];
		return sum;
		
	}
}
