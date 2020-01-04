import java.util.*;
import java.math.BigInteger;
public class Main {
	static int Maxvalue = 5000;
	static BigInteger[] fib = new BigInteger[Maxvalue];
	
	public static void calculateFibonacci() {
		fib[1] = BigInteger.ONE;
		fib[2] = BigInteger.ONE;
		for(int i=3; i<Maxvalue; i++) {
			fib[i] = fib[i-1].add(fib[i-2]);
		}
	}
	
	public static void main(String[] args) {
		calculateFibonacci();
		Scanner scanner = new Scanner(System.in);
		while(scanner.hasNext()) {
			int n = scanner.nextInt();
			System.out.println(fib[n]);
		}
	}
}
