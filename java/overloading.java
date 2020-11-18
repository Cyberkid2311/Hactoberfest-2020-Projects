package inheritanceOverloading;

import java.io.*;
import java.util.*;

class Interest
{
	Interest(int p)
	{
		int principal=p;
		double rate=8.87;
		int time =3;
		System.out.println(principal*rate*time/100);
	}
	Interest(int p,int t)
	{
		int principal=p;
		double rate=8.87;
		int time =t;
		System.out.println(principal*rate*time/100);
	}
	Interest(int p,double r,int t)
	{
		int principal=p;
		double rate=r;
		int time =t;
		System.out.println(principal*rate*time/100);		
	}
}

class overloading
{
	public static void main(String[] args)
	{
	final Scanner ob=new Scanner(System.in);
	System.out.println("Enter number of iterations : ");
	final int n;
	n=ob.nextInt();
	for(int i=0;i<n;i++)
	{
		System.out.println("How many parameters do you wish to enter?");
		int m=ob.nextInt();
		switch(m)
		{
			case 1:
			System.out.println("Enter principal amount : ");
			int p1=ob.nextInt();
			Interest in=new Interest(p1);
			break;
			
			case 2:
			System.out.println("Enter principal amount : ");
			int p2=ob.nextInt();
			System.out.println("Enter time : ");
			int t2=ob.nextInt();
			Interest in2=new Interest(p2,t2);
			break;

			case 3:
			System.out.println("Enter principal amount : ");
			int p3=ob.nextInt();
			System.out.println("Enter rate : ");
			int r3=ob.nextInt();
			System.out.println("Enter time : ");
			int t3=ob.nextInt();
			Interest in3=new Interest(p3,r3,t3);
			break;
		}
	}
	}
}