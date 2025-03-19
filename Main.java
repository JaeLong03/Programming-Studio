import java.util.Scanner; 

public class Main{ 
    public static void main(String[] args){ 
        Main pStudio = new Main(); 
        pStudio.J001(); 
    }

    public void J001(){ 
        int height, weight; 
        double bmi; 

        Scanner n = new Scanner(System.in); 
        height = n.nextInt();
        weight = n.nextInt(); 

        bmi = (double) weight / (((double)height * 0.01) * ((double)height * 0.01)); 
        System.out.printf("%.1f\n", bmi);
        n.close(); 
    }
}