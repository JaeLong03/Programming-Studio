import java.io.FileNotFoundException;
import java.util.*;
import java.text.SimpleDateFormat;

public class Main {
    Scanner s = new Scanner(System.in);
    public static void main(String[] args) throws FileNotFoundException{
        if(args.length != 1) {
            System.out.println("Usage: java Main <Lab No ##>");
            return;
        }
        Main my_lab =  new Main();
        String lab_num = args[0];

        switch(lab_num) {
            case "91":
                my_lab.J091();
                break;
            case "92":
                my_lab.J092();
                break;
        }
    }

    public void J091(){
        HashMap <String, Score> map = new HashMap<>();
        int input;
        String name = "";
        int kor, eng, mat;
        while(true) {
            System.out.print("1.Insert 2.Print 3.Search 4.Edit 5.Quit: ");
            input = s.nextInt();
            switch(input) {
                case 1:
                    System.out.print("Enter the name and score to store: ");
                    name = s.next();
                    kor = s.nextInt();
                    eng = s.nextInt();
                    mat = s.nextInt();
                    Score student = new Score(kor, eng, mat);
                    map.put(name, student);
                    break;
                case 2:
                    Iterator entries = map.entrySet().iterator();
                    while(entries.hasNext()) {
                        Map.Entry entry = (Map.Entry) entries.next();
                        String temp = (String) entry.getKey();
                        Score tempS = (Score) entry.getValue();
                        System.out.println("Student " + temp + tempS);
                    }
                    break;
                case 3:
                    System.out.print("Enter the name you want to find: ");
                    String fname = s.next();
                    Score foundScore = map.get(fname);
                    if (foundScore != null) {
                        System.out.println("Found: " + fname + " " + foundScore);
                    } else {
                        System.out.println("Student not found.");
                    }
                    break;
                case 4:
                    System.out.print("Enter the name you want to find: ");
                    String gname = s.next();
                    Score setScore = map.get(gname);
                    if (setScore != null) {
                        System.out.print("Enter new scores: ");
                        int newKor = s.nextInt();
                        int newEng = s.nextInt();
                        int newMat = s.nextInt();
                        setScore.setKor(newKor);
                        setScore.setEng(newEng);
                        setScore.setMat(newMat);
                        setScore.setSum((int)(newKor + newEng + newMat));
                        setScore.setAvg((double)(newKor + newEng + newMat) / 3.0);
                        System.out.println("Successfully updated!");
                    } else {
                        System.out.println("Student not found.");
                    }
                    break;
                case 5:
                    System.out.println("Bye!");
                    return;
            }
        }

    }

    public void J092(){
        HashMap<Integer, Park> map = new HashMap<>();
        int input;
        int num;
        String type;

        while(true) {
            System.out.print("1) enter, 2) exit, 3) list, 4) quit > ");
            input = s.nextInt();
            switch (input) {
                case 1:
                    System.out.print("Enter number, type > ");
                    num = s.nextInt();
                    type = s.next();
                    Park car = new Park(type);
                    map.put(num, car);
                    break;
                case 2:
                    System.out.print("Enter car number to exit > ");
                    int fnum = s.nextInt();
                    Park foundPark = map.get(fnum);
                    if (foundPark != null) {
                        Date outTime = new Date();
                        System.out.print(fnum + " " + foundPark.getCarType() + " " + foundPark.getParkingMinutes(outTime) + "min");
                        System.out.println(", Parking fee " + foundPark.calculateFee(outTime) + " (current time " + foundPark.getFormattedInTime() + ")");
                        map.remove(fnum);
                    } else {
                        System.out.println("Parking car not found.");
                    }
                    break;
                case 3:
                    int cnt = 1;
                    System.out.println("===================================");
                    System.out.println("num\t\ttype\t\ttime");
                    Iterator entries = map.entrySet().iterator();
                    while(entries.hasNext()) {
                        Map.Entry entry = (Map.Entry) entries.next();
                        int temp = (Integer) entry.getKey();
                        Park tempS = (Park) entry.getValue();
                        System.out.println("[" + cnt + "]" +  temp + "\t\t" + tempS);
                        cnt++;
                    }
                    break;
                case 4:
                    return;
            }
        }
    }

}
