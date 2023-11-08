import java.util.*;

public class Main {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		
		int N = scanner.nextInt();
		int number[] = new int[N];
		int count = 0;
		
		for (int i = 0; i < N; i++) {
			number[i] = scanner.nextInt();
		}
		int find = scanner.nextInt();
		for (int j = 0; j < N; j++) {
			if (number[j] == find) {
				count++;
			}
		}
		System.out.println(count);
		scanner.close();
	}
}
