import java.util.Scanner; 

public class Main{ 
    public static void main(String[] args){ 
        Main pStudio = new Main(); 
        pStudio.J005(); 
    }

    void J005(){ 
        Scanner n = new Scanner(System.in); 

        int month,day; 
        int day_count; 
        
        month = n.nextInt(); 
        day = n.nextInt(); 

        day_count = 0; 
        for(int i = 1; i < month; i++){ 
            if(i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12){ 
                day_count += 31; 
            }
            else if(i == 4 || i == 6 || i == 9 || i == 11){ 
                day_count += 30; 
            }
            else if(i == 2){ 
                day_count += 28; 
            }
        }

        day_count += day; 

        System.out.println(day_count); 
        n.close(); 
    }
} 
