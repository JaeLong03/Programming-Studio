import java.util.Scanner; 

class Main {
    public static void main(String[] args) {
      Main pStudio = new Main(); 
      pStudio.J025(); 
    }

    void J025(){
        int[] monthdays = {31, 28, 31, 30, 31 ,30, 31, 31, 30, 31, 30, 31}; 
        int month, day; 
        int day_count = 0; 

        Scanner in = new Scanner(System.in); 

        month = in.nextInt(); 
        day = in.nextInt(); 

        if(month > 12 || month < 1 || monthdays[month-1] < day || day < 1){ 
            System.out.println("Wrong date!"); 
            return; 
        }

        for(int i = 0; i < month-1; i++){ 
            day_count += monthdays[i]; 
        }
        day_count += day; 

        System.out.println(day_count); 
        in.close(); 
    }
}
