import java.util.Random;

public class MakePW{ 
    String pw; 

    public MakePW(){ 
        pw = "";
    }

    public void make(int length){ 
        Random random = new Random();
        for(int i= 0; i< length; i++){ 
            int num = random.nextInt(3);
            if(num == 0){ 
                pw += (char)(random.nextInt(26) + 'A'); 
            }else if(num == 1){ 
                pw += (char)(random.nextInt(26) + 'a'); 
            }else{ 
                pw += (char)(random.nextInt(10) + '0'); 
            }
        }
    }

    public void make(int length, int amount){ 
        for(int i = 0; i < amount; i++){ 
            make(length); 
            System.out.println(pw); 
            pw = "";
        }
    }

}
