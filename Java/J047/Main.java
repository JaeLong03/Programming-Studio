import java.util.Scanner; 


public class Main {
    public static void main(String[] args) {
        Main pStudio = new Main(); 
        pStudio.J047(); 
    }

    public void J047(){ 
        String str; 
        Scanner in = new Scanner(System.in); 
        MyString a = new MyString(); 

        str = in.nextLine(); 
        System.out.println(a.removeSpaces(str)); 
    }
}