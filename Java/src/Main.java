import java.util.*;
import java.io.*;

public class Main {
    Scanner s = new Scanner (System.in);
    public static void main(String[] args) {
        if (args.length != 1) {
            System.out.println("Usage: java Main <Lab No ##>");
            return;
        }
        Main my_lab = new Main();
        String lab_num = args[0];
        switch (lab_num) {
            case "81":
                my_lab.J081();
                break;
            case "82":
                my_lab.J082();
                break;
            case "83":
                my_lab.J083();
                break;
            case "84":
                my_lab.J084();
                break;
            case "85":
                my_lab.J085();
                break;
        }
    }


    public void J081() {
        System.out.print("파일 이름을 입력하세요: ");
        String name = s.nextLine();

        try {
            BufferedReader file = new BufferedReader(new FileReader(name));
            String line = file.readLine();
            file.close();

            String[] tokens = line.trim().split(" ");
            int[] arr = new int[tokens.length];

            int max = Integer.parseInt(tokens[0]);
            int min = Integer.parseInt(tokens[0]);
            for (int i = 1; i < tokens.length; i++) {
                if( max < Integer.parseInt(tokens[i])) max = Integer.parseInt(tokens[i]);
                if( min > Integer.parseInt(tokens[i])) min = Integer.parseInt(tokens[i]);
            }
            System.out.println("Maximum number: " + max);
            System.out.println("Minimum number: " + min);

        } catch (FileNotFoundException e) {
            System.out.println("파일을 찾을 수 없습니다: " + e.getMessage());
        } catch (IOException e) {
            System.out.println("파일을 읽는 중 오류 발생: " + e.getMessage());
        } catch (NumberFormatException e) {
            System.out.println("숫자 형식이 잘못되었습니다: " + e.getMessage());
        }
    }

    public void J082(){
        System.out.print("파일 이름을 입력하세요: ");
        String name = s.nextLine();

        try {
            BufferedReader file = new BufferedReader(new FileReader(name));
            int cnt = 0, bcnt = 0;
            String line;

            while ((line = file.readLine()) != null) {
                String[] token = line.trim().split(" ");
                if (token.length != 2) continue; // 안전 처리

                int height = Integer.parseInt(token[0]);
                int weight = Integer.parseInt(token[1]);
                double bmi = weight / Math.pow(height * 0.01, 2);

                if (bmi >= 25) bcnt++;
                cnt++;
            }

            System.out.println("All " + cnt + " persons");
            if (cnt > 0) {
                double percent = (double) bcnt / cnt * 100;
                System.out.printf("Total overweight persons: %d (%.0f%%)\n", bcnt, percent);
            }
        } catch (FileNotFoundException e) {
            System.out.println("파일을 찾을 수 없습니다: " + e.getMessage());
        } catch (IOException e) {
            System.out.println("파일을 읽는 중 오류 발생: " + e.getMessage());
        } catch (NumberFormatException e) {
            System.out.println("숫자 형식이 잘못되었습니다: " + e.getMessage());
        }
    }

    public void J083(){
        System.out.print("파일 이름을 입력하세요: ");
        String name = s.nextLine();

        try {
            BufferedReader file = new BufferedReader(new FileReader(name));
            String line;
            ArrayList<Score> ScoreManager = new ArrayList<Score>();
            int kor, eng, mat;
            double korA, engA, matA;
            double max;

            while ((line = file.readLine()) != null) {
                String[] token = line.trim().split(" ");
                Score temp = new Score(token[0], Integer.parseInt(token[1]), Integer.parseInt(token[2]), Integer.parseInt(token[3]));
                ScoreManager.add(temp);
            }
            file.close();

            kor = eng = mat = 0;
            korA = engA = matA = 0;
            max = ScoreManager.get(0).getAvg();
            int maxIndex = 0;
            for(int i = 0; i< ScoreManager.size(); i++) {
                kor += ScoreManager.get(i).getKor();
                eng += ScoreManager.get(i).getEng();
                mat += ScoreManager.get(i).getMat();
                if(max < ScoreManager.get(i).getAvg()){
                    max = ScoreManager.get(i).getAvg();
                    maxIndex = i;
                }
            }

            korA = (double) kor / 3.0;
            engA = (double) eng / 3.0;
            matA = (double) mat / 3.0;

            System.out.println("Korean total: " + kor + " Korean average: " + korA);
            System.out.println("English total: " + eng + " English average: " + engA);
            System.out.println("Math total: " + mat + " Math average: " + matA);
            for(Score score: ScoreManager) {
                System.out.println(score);
            }
            System.out.println("Highest average student: " + ScoreManager.get(maxIndex));

        } catch (FileNotFoundException e) {
            System.out.println("파일을 찾을 수 없습니다: " + e.getMessage());
        } catch (IOException e) {
            System.out.println("파일을 읽는 중 오류 발생: " + e.getMessage());
        } catch (NumberFormatException e) {
            System.out.println("숫자 형식이 잘못되었습니다: " + e.getMessage());
        }
    }

    public void J084(){
        System.out.print("파일 이름을 입력하세요: ");
        String name = s.nextLine();

        try {
            BufferedReader file = new BufferedReader(new FileReader(name));
            int max, min;
            String line, longest = "", shortest = "";
            int cnt = 0;

            line = file.readLine();
            max = min = line.length();
            while (line != null) {
                cnt++;
                int size = line.length();
                if(size > max) {
                    max = size;
                    longest = line;
                }
                if(size < min) {
                    min = size;
                    shortest = line;
                }
                line = file.readLine();
            }

            System.out.println("Count: " + cnt);
            System.out.println("Longest: " + longest);
            System.out.println("Shortest: " + shortest);

        } catch (FileNotFoundException e) {
            System.out.println("파일을 찾을 수 없습니다: " + e.getMessage());
        } catch (IOException e) {
            System.out.println("파일을 읽는 중 오류 발생: " + e.getMessage());
        } catch (NumberFormatException e) {
            System.out.println("숫자 형식이 잘못되었습니다: " + e.getMessage());
        }
    }

    public void J085(){
        System.out.print("파일 이름을 입력하세요: ");
        String name = s.nextLine();

        try {
            BufferedReader file = new BufferedReader(new FileReader(name));
            String line = "";
            int lower, upper, space;

            lower = upper = space = 0;
            line = file.readLine();
            while (line != null) {
                for(int i= 0; i< line.length(); i++) {
                    char s = line.charAt(i);
                    if ((int) s >= (int) 'a' && (int) s <= (int) 'z') lower++;
                    else if ((int) s >= (int) 'A' && (int) s <= (int) 'Z') upper++;
                    else if(s == ' ') space++;
                }
                line = file.readLine();
            }

            System.out.println("A~Z - " + upper);
            System.out.println("a~z - " + lower);
            System.out.println("spaces - " + space);
            file.close();

        } catch (FileNotFoundException e) {
            System.out.println("파일을 찾을 수 없습니다: " + e.getMessage());
        } catch (IOException e) {
            System.out.println("파일을 읽는 중 오류 발생: " + e.getMessage());
        } catch (NumberFormatException e) {
            System.out.println("숫자 형식이 잘못되었습니다: " + e.getMessage());
        }
    }

}
