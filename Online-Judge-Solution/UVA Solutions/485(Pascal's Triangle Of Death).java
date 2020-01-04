import java.math.BigInteger;

public class Main {
    public static void main(String[] args) {
        // TODO Auto-generated method stub

        BigInteger current[] = new BigInteger[10000];
        BigInteger next[] = new BigInteger[10000];
        BigInteger end = BigInteger.TEN;

        for ( int i = 2; i <= 60; i++ )
            end = end.multiply(BigInteger.TEN);

        current [0] = current [1] = BigInteger.ONE;
        System.out.println (1);
        System.out.println ("1" + " " + "1");
        int line = 1;
        boolean stop = true;

        for ( ; stop ; ) {
            next [0] = BigInteger.ONE;
            for ( int i = 1; i <= line; i++ ) {
                next [i] = current [i].add(current [i - 1]);
                if ( next [i].compareTo(end) >= 0 ) stop = false;
            }
            next [++line] = BigInteger.ONE;

            for ( int i = 0; i < line; i++ ) {
                System.out.print (next [i] + " ");
                current [i] = next [i];
            }
            System.out.println (1);
            current [line] = BigInteger.ONE;
        }
    }
}
