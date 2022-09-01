import java.util.Scanner; // 导入Scanner类
public class Homework1 {
    public static void main(String[]args){
        try (// 以下部分借用java.util.Scanner类获取键盘输入并输出
        Scanner sc = new Scanner(System.in)) {
            System.out.println("请输入专业:");
            String majar=sc.nextLine();
            System.out.println("请输入姓名:");
            String name=sc.nextLine();
            System.out.println("欢迎"+majar+"专业"+name+"同学开始学习面向对象程序设计!");
        }
    }
}