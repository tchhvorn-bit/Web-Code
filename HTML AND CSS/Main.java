import java.util.Scanner;

public class Main {

    public static void main(String[] args){
       double width;
       double heigh;
       double area;

        try (Scanner scanner = new Scanner(System.in)) {
            System.out.print("Enter the width: ");
            width = scanner.nextDouble();
            
            System.out.print("Enter the heigh: ");
            heigh = scanner.nextDouble();
            
            area = width * heigh;
            
            System.out.print("The area is: " + area + "cm²");
            // Numberlock + Alt + 0178

            String adjective1;
            String noun1;
            String adjective2;
            String verb1;
            String adjective3;

            System.out.print("Enter an adjective (description): ");
            adjective1 = scanner.nextLine();
            System.out.print("Enter a noun (animal or person): ");
            noun1 = scanner.nextLine();
            System.out.print("Enter an adjective (description): ");
            adjective2 = scanner.nextLine();
            System.out.print("Enter a verb end with -ing (action): ");
            verb1 = scanner.nextLine();
            System.out.print("Enter an adjective (description): ");
            adjective3 = scanner.nextLine();

            System.out.println("Today I went to a " + adjective1 + "zoo.");
            System.out.println("In an exhibit, I saw a " + noun1 + ".");
            System.out.println(noun1 + " was " + adjective2 + " and " + verb1 + "!");
            System.out.println("I was " + adjective3 + "!");

            // SHOPPING CART PRORAM

            String item;
            double price;
            int quantity;
            char currency = '$';
            double total;

            System.out.print("What item would like to buy?: ");
            item = scanner.nextLine();

            System.out.print("What is the price for each?: ");
            price = scanner.nextDouble();

            System.out.print("How many would you like?: ");
            quantity = scanner.nextInt();

            total = price * quantity;

            System.out.println("\nYou have bought " + quantity + " " + item + "/s");
            System.out.println("Your total is " + currency + total);
            
            // if Staterment

            String name;
            int age;
            boolean isStudent;

            System.out.print("Enter your name: ");
            name = scanner.nextLine();

            System.out.print("Enter Your age: ");
            age = scanner.nextInt();

            System.out.println("Are your a student (true/false): ");
            isStudent = scanner.nextBoolean();

            if(name.isEmpty()){
                System.out.println("Your didn't enter your name!!");
            }
            else{
                System.out.println("Hello " + name + "!");
            }

            if (age >= 65){
                System.out.println("You are a senier");
            }
            else if (age >= 18) {
                System.out.println("You are an adult");
            }
            else if(age < 0){
                System.out.println("You haven't been born yet!");
            }
            else if(age == 0){
                System.out.println("You are a baby!");
            }
            else{
                System.out.println("You are a child");
            }

            if(isStudent){
                System.out.println("You are a student!");
            }
            else{
                System.out.println("You are not a student.");
            }
            
            scanner.close();

        }
    }
}