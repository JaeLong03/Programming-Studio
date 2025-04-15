public class Main {
    public static void main(String[] args) {
        Main pStudio = new Main(); 
        pStudio.J041(); 
    }

    public void J041(){ 
        Lotto a = new Lotto(); 
        System.out.print("초기 로또 번호: "); 
        a.printNumber(); 
        System.out.print("\n"); 

        a.remakeAuto();
        System.out.print("생성된 로또 번호: "); 
        a.printNumber();
        System.out.print("\n"); 

    }
}
