import java.util.Scanner;

/*
 * 有一个数列: 8, 4, 2, 1, 23, 344, 12
 * 1.循环输出数列的值
 * 2.求数列中所有数值的和
 * 3.猜数游戏: 从键盘中任意输入一个数据,判断数列中是否包含此数
*/


class Homework2 {
    static int[] arr = {8, 4, 2, 1, 23, 344, 12};
    public static void main(String[] args) {
        one();
        two();
        three();
    }
    public static void one() {
        System.out.println("数列中的数值:");
        for(int x:arr){
            System.out.println(x);
        }
    }
    public static void two() {
        System.out.println("数列中所有数值的和:");
        int sum = 0;
        for(int x:arr) sum += x;
        System.out.println(sum);
    }
    public static void three() {
        System.out.println("猜数游戏:");
        Scanner sc = new Scanner(System.in);
        int target = sc.nextInt();
        boolean is = false;
        for(int x:arr){
            if(x == target) is = true;
        }
        sc.close();
        if(is) System.out.println("YES");
        else System.out.println("NO");
    }
}
