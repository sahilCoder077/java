import java.util.Scanner;

public class soft {

    public static void main(String args[]) {

        Scanner file1 = new Scanner(System.in);
        System.out.print("enter the meter:");
        int emotion = file1.nextInt();

        switch (emotion) {

            case 1:
                System.out.print("you are happy");
                break;

            case 2:
                System.out.print("you are sad");
                break;

            case 3:
                System.out.print("you are angry");
                break;

            case 4:
                System.out.print("you are surpriesed");
                break;

            default:

                System.out.print("emotion is unkown");

        }

        file1.close();
    }

}