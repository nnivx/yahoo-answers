import java.util.*;

public class Ruler {

	public static void drawRuler(int inches) {
		topEdge(inches);
		Marks(inches);
		Numbers(inches);
	}

	public static void topEdge(int inches){
		System.out.print(" ");
		for (int i = 1; i <= inches*4; i++) {
			System.out.print("_");
		}
	}

	public static void Marks(int inches) {
		System.out.println();
		System.out.print("|");
		for (int i = 1; i <= inches*2; i++) {
			System.out.print("'|");
		}
		System.out.println();
	}

	public static void Numbers(int inches) {
		System.out.print("|");
		for (int i = 1; i <= 9; i++) {
			for (int j = 1; j <= 3; j++) {
				System.out.print("_");
			}
			System.out.print(i);
		}

		for (int i = 10; i <= inches; i++) {
			for (int j = 1; j <= 2; j++) {
				System.out.print("_");
			}
			System.out.print(i);
		}
	}

	public static void main(String[] args) {
		System.out.print("How many inches long will the ruler be? ");
		Scanner sc = new Scanner(System.in);
		int inches = sc.nextInt();
		drawRuler(inches);
	}

}
