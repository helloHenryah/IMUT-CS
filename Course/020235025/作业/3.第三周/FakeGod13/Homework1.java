public class Homework1 {
    public static void main(String args[]){
        System.out.println(func(30));
    }
    public static int func(int n) {
        if(n==1||n==2) return 1;
        else return func(n-1)+func(n-2);
    }
}
