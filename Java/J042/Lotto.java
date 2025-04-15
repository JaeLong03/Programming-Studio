import java.util.Scanner; 
import java.util.Random;

public class Lotto{ 
    int[] numbers; 

    public Lotto(){ 
        numbers = new int[6]; 
    }

    public void printNumber(){ 
        for(int i = 0; i< 6; i ++){ 
            System.out.print(numbers[i] + " "); 
        }
    }

    public void remake(){ 
        Scanner in = new Scanner(System.in); 
        for(int i = 0; i < 6; i++){
            numbers[i] = in.nextInt(); 
            if(numbers[i] < 1 || numbers[i] > 45){ 
                System.out.println("Out of range"); 
                i--; 
            }
            for(int j = 0; j < i; j++){ 
               if(numbers[j] == numbers[i]){
                System.out.println("Repeated");
                i--; 
                break; 
               }
            }

        }
    }
}
