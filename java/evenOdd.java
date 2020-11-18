package inheritanceOverloading;



import java.util.Scanner;

class solve{
	int numberOfElements;
	int[] originalArray=new int[100];
	int even=0,k=0;
	int[] newArray=new int[100];
	Scanner sc = new Scanner(System.in);
	void get() {
		System.out.println("Enter the number of elements in array:");
		numberOfElements= sc.nextInt();
		int n=numberOfElements;
		System.out.println("Enter elements: ");
		for(int i=0;i<n;i++)
			originalArray[i]=sc.nextInt();
		
	}
	void sort() {
		int n=numberOfElements;
		for(int i=0;i<numberOfElements;i++) {
			if((originalArray[i]&1)==0) {
				newArray[k]=originalArray[i];
				k++;
			}
			else {
				newArray[n-1]=originalArray[i];
				n--;
			}
		}
		
		
	}
	void display() {
		for(int i=0;i<numberOfElements;i++)
			System.out.print(newArray[i]+" ");
	}
	
}
public class evenOdd {
public static void main(String[] args) {
	solve obj=new solve();
	obj.get();
	obj.sort();
	obj.display();
}
}

