import java.util.*;

public class Main {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		
		int N = scanner.nextInt();
		int X = scanner.nextInt();
		int number[] = new int[N];
		int num = 0;
		
		for (int i = 0; i < N; i++) {
			number[i] = scanner.nextInt();
		}

		for (int j = 0; j < N; j++) {
			if (number[j] < X) {
				num = number[j];
				System.out.print(num + " ");
			}
		}
		scanner.close();
	}
}

