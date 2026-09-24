public class FloatTest {
    public static void main(String[] args) {
        System.out.println("0.01 * 100 = " + (0.01 * 100));
        long sum = 0;
        for (int i = 0; i < 100; i++) {
            sum += 0.01;
        }
        System.out.println("0.01 加 100 次 = " + sum);
    }
}
