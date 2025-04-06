import java.util.Scanner; 

class Main {
    public static void main(String[] args) {
      Main pStudio = new Main(); 
      pStudio.J031(); 
    }

    void J031(){
        String userid; 
        String password; 
        String name; 

        Scanner in = new Scanner(System.in); 
        userid = in.next(); 
        password = in.next(); 
        in.nextLine();
        name = in.nextLine(); 

        if(password.length() < 3){ 
            System.out.println("Error! password is too short."); 
        }
        else{ 
            char[] pwChars = password.toCharArray();
            for (int i = 2; i < pwChars.length; i++) {
                pwChars[i] = '*';
            }
            password = new String(pwChars);
            System.out.println("User Id: " + userid); 
            System.out.println("Password: " + password);
            System.out.println("User name: " + name);  
        }

        in.close();
    }
}