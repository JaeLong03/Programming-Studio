public class Main {
    public static void main(String[] args) {
        Main pStudio = new Main(); 
        pStudio.J043(); 
    }

    public void J043(){ 
        Lotto a = new Lotto(); 
        Lotto b = new Lotto(); 
        
        a.remakeAuto();
        System.out.print("자동 생선된 로또 번호: "); 
        a.printNumber(); 
        System.out.print("\n"); 

        b.remake();
        System.out.print("입력 받은 로또 번호: "); 
        b.printNumber(); 
        System.out.print("\n"); 

        int count = a.checkLotto(b.numbers); 
        System.out.println("일치 개수: " + count); 
    }
}