import java.util.Scanner; 

class Main {
    public static void main(String[] args) {
      Main pStudio = new Main(); 
      pStudio.J026(); 
    }

    void J026(){
        int number; 
        int max_num, min_num; 

        Scanner in = new Scanner(System.in); 
        number = in.nextInt(); 

        int[] arr = new int[number]; 
        for(int i = 0; i < number; i++){ 
            arr[i] = in.nextInt(); 
        }

        max_num = arr[0]; 
        min_num = arr[0]; 
        for(int i = 1; i < number; i++){ 
            if(arr[i] > max_num){ 
                max_num = arr[i]; 
            }
            else if(arr[i] < min_num){ 
                min_num = arr[i]; 
            }
        }

        System.out.println("가장 큰 수 " + max_num); 
        System.out.println("가장 작은 수 " + min_num); 
        in.close(); 
    }
}
