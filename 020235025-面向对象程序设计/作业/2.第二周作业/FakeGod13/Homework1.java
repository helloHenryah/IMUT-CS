/*
 * 5.甲乙两人打赌，看谁赚的钱多。
 * 甲承诺每天给乙1000元钱。 
 * 乙承诺第一天给甲1分钱，
 * 第二天给甲2分钱，
 * 第三天给甲4分钱，
 * 第四天给甲8分钱......。 
 * 请问30天后，甲乙谁赢？编写程序，判断甲乙谁赢？（作业）
*/
class Homework1 {
    public static void main(String[]args){
        int a = 0, b = 0, cost = 1;
        for(int i=1; i<=30; i++){
            //System.out.println("cost = " + cost);
            a = a+cost-10000;
            b = b-cost+10000;
            cost *= 2;
        }
        System.out.println("a = " + a);
        System.out.println("b = " + b);
        if(a > b) System.out.println("甲赢");
        else System.out.println("乙赢");
    }
}