import java.util.*; 

class Main {
    public static void main(String[] args) {
      Main pStudio = new Main(); 
      pStudio.J035(); 
    }

    void J035(){
        String birth; 
        int total = 0;

        Scanner in = new Scanner(System.in); 
        birth = in.next();
        while(true){ 
            if(birth.length() != 8) { 
                System.out.println("Birth has to be 8 figures"); 
                birth = in.next(); 
            }
            else{ 
                break; 
            }
        }

        total += Integer.parseInt(birth.substring(0,1)) + Integer.parseInt(birth.substring(1,2)) + Integer.parseInt(birth.substring(2,3)) + Integer.parseInt(birth.substring(3,4)); 
        total += Integer.parseInt(birth.substring(4,6)) + Integer.parseInt(birth.substring(6,8)); 
        System.out.println(total); 
    }
}