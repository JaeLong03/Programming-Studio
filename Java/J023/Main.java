import java.util.Scanner; 

class Main {
    public static void main(String[] args) {
      Main pStudio = new Main(); 
      pStudio.J023(); 
    }

    void J023(){
        int count; 
        int number; 
        int totalsum; 
        double average; 

        Scanner in = new Scanner(System.in); 
        count = in.nextInt(); 


        totalsum = 0; 
        for(int i = 0; i < count; i++){ 
          number = in.nextInt(); 
          totalsum += number; 
        }

        average = (double)totalsum / (double)count; 

        System.out.printf("%d %.1f", totalsum, average); 
        in.close(); 
    }
}