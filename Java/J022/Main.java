import java.util.Scanner; 

class Main {
    public static void main(String[] args) {
      Main pStudio = new Main(); 
      pStudio.J022(); 
    }

    void J022(){
        double m2_area; 
        double pyung_area; 

        int count1 = 0; 
        int count2 = 0 ; 
        int count3 = 0; 
        int count4 = 0; 

        Scanner in  = new Scanner(System.in); 
        
        for(int i = 0; i < 10; i++){ 
            m2_area = in.nextDouble(); 
            pyung_area = m2_area / 3.305; 

            if(pyung_area < 15){ 
                count1++; 
            }
            else if(pyung_area < 30){ 
                count2++; 
            }
            else if(pyung_area < 50){ 
                count3++;  
            }
            else { 
                count4++; 
            }
        }

        System.out.println("small - " + count1); 
        System.out.println("normal - " + count2); 
        System.out.println("large - " + count3); 
        System.out.println("huge - " + count4); 
        
        in.close(); 
    }
}