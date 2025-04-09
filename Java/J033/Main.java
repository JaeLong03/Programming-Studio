import java.util.*; 

class Main {
    public static void main(String[] args) {
      Main pStudio = new Main(); 
      pStudio.J033(); 
    }

    void J033(){
      int count; 
      String name; 
      String longest = ""; 
      String shortest = ""; 

      Scanner in = new Scanner(System.in); 
      count = in.nextInt(); 
      in.nextLine();

      for(int i = 0; i < count; i++){ 
        name = in.nextLine();  
        if(i == 0){ 
          longest = name; 
          shortest = name;
        }
        else if (longest.length() < name.length()){ 
          longest = name; 
        }
        else if (shortest.length() > name.length()){ 
          shortest = name; 
        }
      }

      System.out.println("Longest: " + longest); 
      System.out.println("Shortest: "+ shortest); 

      in.close(); 
    }
}