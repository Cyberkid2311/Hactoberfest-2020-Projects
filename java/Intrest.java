import java.util.*;
class IntrestCalculator
{
	Scanner in = new Scanner(System.in);
	int Principal;
	double Rate;
	int Time;
	void get(){
	System.out.println("enter principal amount");
	Principal = in.nextInt();
	System.out.println("enter intrest rate");
	Rate = in.nextDouble();
	System.out.println("enter time period");
	Time = in.nextInt();
	}	
	void SI(){
		double si = Principal*Time*Rate*(0.01);
		System.out.println("The simple intrest is: "+ si);
	}
	void CI(){
		double Amt = Principal * Math.pow(1 + (Rate*0.01), Time);
		double ci = Amt - Principal;
		System.out.println("The compund intrest calculated anually would be: "+ ci);
	}
}
class Intrest
{
	 public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		int num;
		IntrestCalculator obj = new IntrestCalculator();
		System.out.println("****MENU****");
		System.out.println("1.) Simple Intrest");
		System.out.println("2.) Compound Intrest");
		System.out.println("your choice: ");
		num = sc.nextInt();
		switch (num) {
            case 1:
                obj.get();
                obj.SI();
                break;
            case 2:
                obj.get();
                obj.CI();
                break;
            default:
                System.out.println("Invalid Selection");
        }    
	}
}