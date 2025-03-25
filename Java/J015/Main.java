import java.util.Scanner; 

class Main {
    public static void main(String[] args) {
      Main pStudio = new Main(); 
      pStudio.J015(); 
  }

  void J015(){ 
    int num1, num2, num3; 
    int max_num, min_num; 

    Scanner in = new Scanner(System.in); 

    num1 = in.nextInt(); 
    num2 = in.nextInt(); 
    num3 = in.nextInt(); 

    if(num1 >= num2){ 
        if(num1 >= num3){ 
            max_num = num1; 
        }
        else{ 
            max_num = num3; 
        }
    }
    else{ 
        if(num2 >= num3){ 
            max_num = num2;
        }
        else{ 
            max_num = num3; 
        }
    }

    if(num1 <= num2){ 
        if(num1 <= num3){ 
            min_num = num1; 
        }
        else{ 
            min_num = num3; 
        }
    }
    else{ 
        if(num2 <= num3){ 
            min_num = num2;
        }
        else{ 
            min_num = num3; 
        }
    }

    System.out.println(max_num + " " + min_num); 

  }
}