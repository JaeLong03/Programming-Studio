public class Main {
    public static void main(String[] args) {
        Main pStudio = new Main(); 
        pStudio.J042(); 
    }

    public void J042(){ 
        Lotto a = new Lotto(); 
        System.out.print("초기 로또 번호: "); 
        a.printNumber(); 
        System.out.print("\n"); 

        a.remake();
        System.out.print("생성된 로또 번호: "); 
        a.printNumber();
        System.out.print("\n"); 
    }
}