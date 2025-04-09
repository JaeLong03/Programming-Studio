import java.util.*; 

class Main {
    public static void main(String[] args) {
      Main pStudio = new Main(); 
      pStudio.J036(); 
    }

    void J036(){
        String str; 
        String sort = ""; 
        Scanner in = new Scanner (System.in); 
        int count = 0; 
        boolean yes = true; 

        str = in.nextLine(); 
        for(int i = 0; i < str.length(); i++){ 
            if(str.charAt(i) >= 'A' && str.charAt(i) <= 'z'){ 
                sort += str.charAt(i); 
            }
        }

        sort = sort.toLowerCase(); 
        int len = sort.length() / 2; 
        for(int i = sort.length()-1; i > len; i--){ 
            if(sort.charAt(i) == sort.charAt(count)){ 
                count++; 
                continue; 
            }
            else{ 
                yes = false; 
                break; 
            }
        }

        if(yes)
            System.out.println("Yes"); 
        else
            System.out.println("No"); 

        in.close(); 
    }
}
