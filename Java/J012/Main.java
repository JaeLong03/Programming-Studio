import java.util.Scanner; 

class Main {
    public static void main(String[] args) {
      Main pStudio = new Main(); 
      pStudio.J012(); 
  }

  void J012(){ 
    double m2_area; 
    double pyung_area; 
    
    Scanner in = new Scanner(System.in); 

    m2_area = in.nextDouble(); 

    pyung_area = m2_area / 3.305; 
    System.out.printf("%.1f\n", pyung_area); 

    if(pyung_area < 15){ 
        System.out.println("small"); 
    }
    else if(pyung_area < 30){ 
        System.out.println("normal"); 
    }
    else if(pyung_area < 50){ 
        System.out.println("large "); 
    }
    else { 
        System.out.println("huge"); 
    }

  } 
}