import java.util.Scanner; 

class Main {
    public static void main(String[] args) {
      Main pStudio = new Main(); 
      pStudio.J013(); 
  }

  void J013(){ 
    int kor, eng, math; 
    int total; 
    double average; 
    
    Scanner in = new Scanner(System.in); 
    kor = in.nextInt(); 
    eng = in.nextInt(); 
    math = in.nextInt(); 

    total = kor+eng+math; 
    average = (double)(total) / 3.0; 

    System.out.print(total); 
    System.out.printf(" %.1f\n", average);
    
    if(kor >= 70){ 
        System.out.println("Korean - Pass");
    }
    else{ 
        System.out.println("Korean - Fail");
    }

    if(eng >= 70){ 
        System.out.println("English - Pass");
    }
    else{ 
        System.out.println("English - Fail");
    }

    if(math >= 70){ 
        System.out.println("Math - Pass");
    }
    else{ 
        System.out.println("Math - Fail");
    }

  } 
}