package inheritanceOverloading;


import java.util.Scanner;

class array{
	int[] Array=new int[100];
	int n,j=0,d;
	Scanner sc = new Scanner(System.in);
	void get() {
		System.out.println("Enter the number of elements: ");
		n=sc.nextInt();
		d=n;
		System.out.println("enter the array elements: ");
		for(int i=0;i<n;i++) {
			Array[i]=sc.nextInt();
		}
			
	}
	void Removing() {
		for(int i=0;i<n;i++) {
			for(int j=i+1;j<n;j++) {
				if(Array[i]==Array[j]) {
					d--;
					break;
				}
			}
		}
		System.out.println("the length of array after removing the duplicates is: "+ d);
				
		}
	}


public class duplicateRemoval {

	public static void main(String[] args) {
		
		array obj=new array();
		obj.get();
		obj.Removing();
	}

}
