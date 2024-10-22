import java.math.BigInteger;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String input1 = sc.nextLine();
        BigInteger b1 = new BigInteger(input1);
        
        String input2 = sc.nextLine();
        BigInteger b2 = new BigInteger(input2);
        
        BigInteger sum = b1.add(b2);
        BigInteger mul = b1.multiply(b2);
        
        System.out.println(sum);
        System.out.println(mul);
        
        sc.close();
    }
}