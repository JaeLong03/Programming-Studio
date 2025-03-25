import java.util.Scanner; 

class Main {
    public static void main(String[] args) {
      Main pStudio = new Main(); 
      pStudio.J014(); 
  }

  void J014(){ 
    int income; 
    double tax; 

    Scanner in = new Scanner(System.in); 
    income = in.nextInt(); 

    if(income < 10000000){ 
        tax = (double)income * 9.5 /100; 
    }
    else if(income < 40000000){ 
        tax = (double)income * 19 /100; 
    }
    else if(income < 80000000){ 
        tax = (double)income * 28 /100; 
    }
    else { 
        tax = (double)income * 37 /100; 
    }

    System.out.println((int)tax); 

  }
}