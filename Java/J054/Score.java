import java.util.Scanner;

public class Score {
    int count; 
    int[][] jumsu; 
    int[] sum_student; //학생별 총점
    double[] average_student; // 학생별 평균
    int[] sum_class; //과목별 총점 
    double[] average_class; //과목별 평균 
    char[] grade; 

    public Score(int count){ 
        this.count = count; 
        jumsu = new int[count][3]; 
        sum_student = new int[count]; 
        average_student = new double[count]; 
        grade = new char[count]; 
        sum_class = new int[3]; 
        average_class = new double[3]; 
    }

    public void getScore(){ 
        Scanner in = new Scanner(System.in); 
        for(int i = 0; i< count; i++){ 
            for(int j = 0; j< 3; j++){ 
                jumsu[i][j] = in.nextInt(); 
                sum_student[i] += jumsu[i][j]; 
                sum_class[j] += jumsu[i][j];
            }
        }

        for(int i = 0; i < 3; i++){ 
            average_class[i] = (double)sum_class[i] / (double)count; 
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

    public void printScore(int n){ 
        System.out.println("Student" + (n+1) + " 국어: " + jumsu[n][0] + " 영어: " + jumsu[n][1] + " 수학: " + jumsu[n][2]); 
        System.out.println("Total score: " + sum_student[n] + ", Average score: " + average_student[n]);
    }

    public void printScore(int num, String classname){ 
        System.out.println(classname + " total: " + sum_class[num] + " average: " + average_class[num]); 
    }
}
