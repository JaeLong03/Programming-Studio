import java.util.Scanner; 

class Main {
    public static void main(String[] args) {
      Main pStudio = new Main(); 
      pStudio.J021(); 
    }

    void J021(){
      int height, weight; 
      double bmi; 
      int people;
      int num; 

      Scanner in = new Scanner(System.in); 

      num = in.nextInt(); 
      people = 0; 
      for(int i = 0; i < num; i++){ 
          height = in.nextInt(); 
          weight = in.nextInt(); 

          bmi = (double) weight / (((double)height * 0.01) * ((double)height * 0.01)); 

          if(bmi >= 25){ 
            people++; 
          }
      }

      System.out.println(people); 
      in.close(); 
    }
}
