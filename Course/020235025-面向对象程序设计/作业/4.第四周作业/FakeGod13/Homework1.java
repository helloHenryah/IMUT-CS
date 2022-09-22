/*
 * 练习
 * 要求:
 * (1) 从1-13的13张牌中国随机抽取n个牌;
 * (2) 对抽取的牌进行升序排序.
*/
import java.util.Scanner;

public class Homework1{
    static String[] rank={
        "2","3","4","5","6","7","8","9","10",
        "Jack","Queen","King","Ace"
    };
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.close();
    }
    public static int uniform(int N){
        return (int) (Math.random()*N%13);
    }
}