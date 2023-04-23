/**
	pg3a.java by Alexis M


	modified by MxIII
*/
import java.io.*;

import java.util.Scanner;

public class pg3a {

	public static void main(String[] args) throws IOException {

		Scanner keyboard = new Scanner(System.in);

		String hex;
		char choice = 'y';
		// made it into a while-loop
		while (choice != 'n')
		{
			// moved this ouside; it's more logical, right?
			System.out.print("Do you want to enter a hexadecimal number? ");
			System.out.print("y or n?: ");
			choice = keyboard.next().charAt(0);
			
			switch (choice) {
				case 'y':
					System.out.print("Enter a hexadecimal number: #");
					
					hex = keyboard.next();
					hex = hex.toUpperCase();
					int hexLength = hex.length();
					
					if (valid(hex)) {										// i convert(hex) temporarily
																			// so it will run if i compile it
																			// ^^
						System.out.println(hex + " is valid and equal to" + String.valueOf(hex));
					}
					else {
						System.out.println(hex + " is invalid.");
					}
					
					break;
				case 'n':
					System.out.println("quit");
					break;
			}
		}
	}// main

	public static boolean valid (String validString) {

		int a = 0;
		
		if (validString.charAt(0) == '-') {
			a = 1;
		}
		
		for (int i=a; i< validString.length(); i++) {
			// I changed the logic here. The uppermost bounds are '0' and 'F'.
			// If the char is lower than '0' or higher than 'F', that is invalid.
			// Then, check if the char is inside the inner invalid scope, which
			// is c > '9' && c < 'A'. If it satisfies *both* then it's invalid.
			if ( validString.charAt(i) < '0' || validString.charAt(i) > 'F' ||
				(validString.charAt(i) > '9' && validString.charAt(i) < 'A') )
			{
				System.out.println( (validString.charAt(i) < '0') +" "+
								    (validString.charAt(i) > 'F') +" "+
								    (validString.charAt(i) > '9') +" "+
									(validString.charAt(i) < 'A') );
				return false;
			}
		}
		
		return true;
	}// no closing bracket before
}

