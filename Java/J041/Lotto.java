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

    public void remakeAuto(){ 
        for(int i = 0; i < 6; i++){ 
            numbers[i] = (int)(Math.random() * 45) + 1;
        }
    }
}
