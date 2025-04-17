import java.util.Scanner; 


public class Main {
    public static void main(String[] args) {
        Main pStudio = new Main(); 
        pStudio.J046(); 
    }

    public void J046(){ 
        String s1;
        String s2; 
        MyString a = new MyString(); 

        Scanner in = new Scanner(System.in); 
        s1 = in.next(); 
        s2 = in.next(); 

        if(a.whichFirst(s1, s2) == 1){ 
            System.out.println("1 " + s1); 

        }
        else if(a.whichFirst(s1, s2) == 2){ 
            System.out.println("2 " + s2); 

        }

        in.close(); 
    }
}