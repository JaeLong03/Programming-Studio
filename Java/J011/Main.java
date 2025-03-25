import java.util.Scanner; 

class Main {
    public static void main(String[] args) {
      Main pStudio = new Main(); 
      pStudio.J011(); 
  }

  void J011(){ 
    int height, weight; 
    double bmi; 

    Scanner in = new Scanner(System.in); 

    height = in.nextInt(); 
    weight = in.nextInt(); 

    bmi = (double) weight / (((double)height * 0.01) * ((double)height * 0.01)); 

    if(bmi >= 25){ 
      System.out.println("Yes");
    }
    else{ 
      System.out.println("No");
    }
  }
}