import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Shapes shapeCalculator = new Shapes();
        Scanner scanner = new Scanner(System.in);

        int choice;
        System.out.println("1. Circle");
        System.out.println("2. Square");
        System.out.println("3. Rectangle");
        System.out.print("Enter choices (1,2,3): ");
        choice = scanner.nextInt();

        switch (choice) {
            case 1:
                shapeCalculator.circleArea();
                break;
            case 2:
                shapeCalculator.squareArea();
                break;
            case 3:
                shapeCalculator.rectangleArea();
                break;
            default:
                System.out.println("Sorry, wrong choice. Select 1, 2, or 3.");
        }

        scanner.close(); 
    }
}