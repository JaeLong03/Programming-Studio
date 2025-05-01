import java.util.Scanner; 

public class BMICalculator{ 
    int height, weight; 
    double bmi; 
    int level; 
    String name; 

    public BMICalculator(){ 
        height = weight = 0; 
        bmi = 0; 
        level = 0; 
        name  = ""; 
    }

    public void getHW(){ 
        Scanner in = new Scanner(System.in); 
        System.out.print("Enter a name: "); 
        name = in.nextLine(); 
        System.out.print("Enter the height and weight: ");
        height = in.nextInt(); 
        weight = in.nextInt(); 
        
        bmi = (double) weight / (height * 0.01 * height * 0.01);  

        if(bmi < 18.5) level = 1; 
        else if(bmi < 25) level = 2; 
        else if(bmi < 30) level = 3; 
        else level = 4; 
    }

    public void printBMI(){ 
        System.out.println("Name: " + name); 
        System.out.println("Height: " + height); 
        System.out.println("Weight: " + weight); 
        System.out.println("BMI: " + bmi); 
        System.out.print("Level: "); 

        if(level == 1) System.out.println("Underweight"); 
        else if (level == 2) System.out.println("Healthy weight"); 
        else if (level == 3) System.out.println("Overweight"); 
        else System.out.println("Obesity"); 
    }

}