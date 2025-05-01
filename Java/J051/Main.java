public class Main {
    public static void main(String[] args) {
        Main pStudio = new Main(); 
        pStudio.J051(); 
    }

    public void J051(){ 
        MakePW password = new MakePW(); 
        password.make(10, 5);
    }
}
