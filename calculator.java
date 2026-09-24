import java.util.Scanner;
public class calculator {    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("请输入第一个数字：");
        long a = sc.nextLong();
        System.out.print("请输入运算符(+ - * /)：");
        char op = sc.next().charAt(0);
        System.out.print("请输入第二个数字：");
        long b = sc.nextLong();

        long result = 0;
        switch(op){
            case '+': result = a + b; break;
            case '-': result = a - b; break;
            case '*': result = a * b; break;
            case '/':if(b == 0){
                     System.out.println("错误：除数不能为0！");
                     sc.close();
                     return; // 直接结束程序
                 }
                 result = a / b; 
                 break;
             default: 
                 System.out.println("运算符错误");
                 sc.close();
                 return;
         }
         System.out.println("结果 = " + result);
         sc.close();
     }
 }
