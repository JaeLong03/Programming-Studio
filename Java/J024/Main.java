import java.util.Scanner; 

class Main {
    public static void main(String[] args) {
      Main pStudio = new Main(); 
      pStudio.J024(); 
    }

    void J024(){
        int[] number = new int[10]; 
        int first; 
        int second; 
        int second_max_index = 0; 

        Scanner in = new Scanner(System.in); 
        for(int i = 0; i < 10; i++){ 
            number[i] = in.nextInt();
        }

        first = number[0]; 
        second = number[0]; 
        for(int i = 1; i < 10; i++){ 
            if(number[i] > first) 
                first = number[i]; 
        }

        for(int i = 1; i < 10; i++){ 
            if(number[i] > second && number[i] < first){
                second = number[i]; 
                second_max_index = i+1; 
            }
        }

        System.out.println("[" + second_max_index + "] " + second); 
        in.close(); 
    }
}