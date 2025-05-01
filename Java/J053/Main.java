public class Main {
    public static void main(String[] args) {
        Main pStudio = new Main(); 
        pStudio.J054(); 
    }

    public void J054(){ 
        Score a = new Score(5); 
        a.getScore(); 
        System.out.println("4번쨰 학생의 점수, 총점, 평균"); 
        a.printScore(3);
    }
}
