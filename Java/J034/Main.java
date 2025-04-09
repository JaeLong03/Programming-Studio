import java.util.*; 

class Main {
    public static void main(String[] args) {
      Main pStudio = new Main(); 
      pStudio.J034(); 
    }

    void J034(){
        String[] usernames = {"kim", "lee", "park", "hong", "choi"}; 
        String[] passwords = {"1111", "1234", "3456", "3535", "7777"}; 
        String name; 
        String pw; 
        int i; 

        Scanner in = new Scanner(System.in); 
        name = in.next(); 
        pw = in.next();

        for(i = 0; i < usernames.length; i++){ 
            if(usernames[i].equals(name))
                break;
        }

        if(i == usernames.length){ 
            System.out.println("2) No user!");
        }
        else if(passwords[i].equals(pw)){ 
            System.out.println("1) Login OK!"); 
        }
        else{ 
            System.out.println("3) Incorrect Password!");    
        }
    }
}