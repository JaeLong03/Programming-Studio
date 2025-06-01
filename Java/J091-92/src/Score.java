public class Score {
    private int kor,eng,mat;
    private int sum;
    private double avg;


    public Score(int kor, int eng, int mat) {
        this.kor = kor;
        this.eng = eng;
        this.mat = mat;
        sum = kor + eng + mat;
        avg = (double)(kor+eng+mat) / 3.0;
    }

    public int getKor() {
        return kor;
    }

    public void setKor(int kor) {
        this.kor = kor;
    }

    public int getEng() {
        return eng;
    }

    public void setEng(int eng) {
        this.eng = eng;
    }

    public int getMat() {
        return mat;
    }

    public void setMat(int mat) {
        this.mat = mat;
    }

    public int getSum() {
        return sum;
    }

    public void setSum(int sum) {
        this.sum = sum;
    }

    public double getAvg() {
        return avg;
    }

    public void setAvg(double avg) {
        this.avg = avg;
    }

    public String toString(){
        String s = "";
        s += " - Total sum: " + getSum() + " Total average: " + getAvg();
        return s;
    }
}
