import java.util.Scanner; 

class Main {
    public static void main(String[] args) {
      Main pStudio = new Main(); 
      pStudio.J032(); 
    }

    void J032(){
        String str; 
        String reverse = ""; 

        Scanner in = new Scanner (System.in); 
        str = in.nextLine(); 

        for(int i = str.length()-1; i >= 0; i--){ 
            reverse += str.charAt(i); 
        }

        System.out.println(reverse); 
    }
}