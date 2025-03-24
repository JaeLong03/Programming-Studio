import java.util.Scanner; 
import java.lang.Math; 

public class Main{ 
    public static void main(String[] args){ 
        Main pStudio = new Main(); 
        pStudio.J004(); 
    }

    void J004(){ 
        Scanner n  = new Scanner(System.in); 
        double x1, y1; 
        double x2, y2; 
        double length; 

        x1 = n.nextDouble(); 
        y1 = n.nextDouble(); 
        x2 = n.nextDouble(); 
        y2 = n.nextDouble(); 
        
        length = Math.sqrt(Math.pow(x2-x1, 2) + Math.pow(y2-y1, 2)); 
        System.err.printf("%.1f", length);

        n.close(); 
    }
}
