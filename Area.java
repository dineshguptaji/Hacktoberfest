package Methods;
import java.util.Scanner;
public class Area
{
    static Scanner sc=new Scanner(System.in);
    public static int area(int breadth,int height){
        return breadth*height;
    }
    public static float area(int radius){
        return 3.14f*radius*radius;
    }

    public static void main(String[] args)
    {
        int breadth=sc.nextInt();
        int height=sc.nextInt();
        int radius=sc.nextInt();
        System.out.println("Area of square is "+area(height,breadth)+" m^2");
        System.out.println("Area of circle is "+area(radius)+" m^2");

    }
}
