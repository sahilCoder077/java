import java.util.Scanner;

public class StudentID {
    public static void main(String args[]) {
        // user input
        Scanner read = new Scanner(System.in);

        String name;
        int Age;
        String Bloodgroup;
        String RED = "RED";
        String BLUE = "BLUE";
        String YELLOW = "YELLO";
        
        System.out.print("Enter your name:");
        name = read.nextLine();

        System.out.print("Enter your Age:");
        Age = read.nextInt();

        System.out.print("Enter your Blood group:");
        Bloodgroup = read.next();

        if (Age >= 20) {
            System.out.println("___________________________________\n");
            System.out.println("NAME: " + name);
            System.out.println("Age: " + Age);
            System.out.println("Blood Group: " + Bloodgroup);
            System.out.println("___________________________________\n");
            System.out.println("Your group is " + RED);
            System.out.println("___________________________________\n");

        } else if (Age >= 15 && Age <= 20) {

            System.out.println("___________________________________\n");
            System.out.println("NAME: " + name);
            System.out.println("Age: " + Age);
            System.out.println("Blood Group: " + Bloodgroup);
            System.out.println("___________________________________\n");
            System.out.println("Your group is " + BLUE);
            System.out.println("___________________________________\n");

        } else if (Age >= 10 && Age <= 15) {

            System.out.println("___________________________________\n");
            System.out.println("NAME: " + name);
            System.out.println("Age: " + Age);
            System.out.println("Blood Group: " + Bloodgroup);
            System.out.println("___________________________________\n");
            System.out.println("Your group is " + YELLOW);
            System.out.println("___________________________________\n");

            read.close();
        }



    }
}
