import java.util.Scanner;
 public class Main{
   static long  calculateTax(String name, long  income) {
  long tax=0;
         if(income>=300000){
             tax = (long) (income * 0.2);

         }else if(income>100000){

             tax = (long) (income * 0.1);

         }

       System.out.println("Calculating tax for " + name + " : " + tax);
       return tax;

       }

    public static void main(String[] args) {

        System.out.println("\tTax Calculator App\n\t______WELCOME________");

        Scanner sc=new Scanner(System.in);


        String name[]=new String[10];
        long  income[]=new long[10];

        System.out.print("Enter total person count:");
        int count =sc.nextInt();

        for(int i=1;i<=count;i++){

              System.out.print("Enter the name"+i+":");
              name[i]=sc.next();
              System.out.print("Enter Annual Income: ");
             income[i] = sc.nextLong();
        }

        for (int i = 0; i <count; i++) {
            long tax = calculateTax(name[i], income[i]);
            System.out.println(name[i] + " : " + tax);
        }

    }
}
