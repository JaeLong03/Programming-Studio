import java.util.Scanner; 

public class Main{ 
    public static void main(String[] args){ 
        Main pStudio = new Main(); 
        pStudio.J003(); 
    }
    
    void J003(){ 
        double m2_area; 
        double pyung_area; 

        Scanner n  = new Scanner(System.in); 
        m2_area = n.nextDouble(); 
        pyung_area = m2_area / 3.305; 

        System.out.printf("%.1f", pyung_area); 
        n.close(); 
    }
} 
