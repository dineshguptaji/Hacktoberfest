import java.util.Scanner;

public class ShortHandIfElse
{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter any integer");
        int a = sc.nextInt();
        System.out.println("Enter any integer");
        int b = sc.nextInt();
        int d;
        int c=0;


//        Below top 3 comments indicates wrong use (syntax error) of ternary operator.

//        d = a>b? d=a:d=b;
//        System.out.println(d);
//        String c = (a>b) ? "a is greater than b" : "b is greater than a";



//        Printing maximum of 2 nos.
        d = a>b ? a:b;
        System.out.println("a is "+d);

//        Printing even or odd with ternary operator.
        String isEven=a%2==0?"Even":"Odd";
        System.out.println(isEven);

//        Printing maximum of 3 nos.
        int Max=a>b?a>c?a:c:b>c?b:c;
        System.out.println(Max);
    }
}
