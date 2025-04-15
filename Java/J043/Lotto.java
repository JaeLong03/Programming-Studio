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

    public int checkLotto(int[] check){ 
        int count = 0; 
        for(int i = 0; i < 6; i++){ 
            for(int j = 0; j < 6; j++){ 
                if(numbers[i] == check[j]){ 
                    count ++; 
                    break; 
                }
            }
        }

        return count; 
    }
}
