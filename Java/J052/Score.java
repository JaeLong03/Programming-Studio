import java.util.Scanner;

public class Score {
    int count; 
    int[][] jumsu; 
    int[] sum_student; 
    double[] average_student; 
    char[] grade; 

    public Score(int count){ 
        this.count = count; 
        jumsu = new int[count][3]; 
        sum_student = new int[count]; 
        average_student = new double[count]; 
        grade = new char[count]; 
    }

    public void getScore(){ 
        Scanner in = new Scanner(System.in); 
        for(int i = 0; i< count; i++){ 
            for(int j = 0; j< 3; j++){ 
                jumsu[i][j] = in.nextInt(); 
                sum_student[i] += jumsu[i][j]; 
            }
        }

        for(int i = 0; i< count; i++){ 
            average_student[i] = (double) sum_student[i] / 3.0; 
            if(average_student[i] >= 90) grade[i] = 'A'; 
            else if(average_student[i] >= 80) grade[i] = 'B'; 
            else if(average_student[i] >= 70) grade[i] = 'C'; 
            else if(average_student[i] >= 60) grade[i] = 'D'; 
            else grade[i] = 'F'; 
        }
        in.close(); 
    }

    public void printScore(){ 
        for(int i = 0; i < count; i++){ 
            System.out.println("Student" + (i+1) + "- total score: " + sum_student[i] + ", average score: " + average_student[i]); 
        }
    }
}
