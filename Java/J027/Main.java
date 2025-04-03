import java.util.Scanner; 

class Main {
    public static void main(String[] args) {
      Main pStudio = new Main(); 
      pStudio.J027(); 
    }

    void J027(){
        int[] height = new int[10]; 
        int[] weight = new int[10]; 
        double[] bmi = new double[10]; 
        int count = 0; 
        int i; 

        Scanner in = new Scanner(System.in); 

        for(i = 0; i < 10; i++){ 
            height[i] = in.nextInt(); 
            weight[i] = in.nextInt();
            bmi[i] = (double) weight[i] / (((double)height[i] * 0.01) * ((double)height[i] * 0.01));
        }

        System.out.print("Overweight person - "); 
        for(i = 0; i < 10; i++){ 
            if(bmi[i] >= 25){ 
                System.out.print(i+1 + " "); 
                count++;
            }
        }
        System.out.print("\n"); 
        System.out.println("Total - " + count); 

        in.close(); 
    } 
}