import java.text.SimpleDateFormat;
import java.util.Date;

public class Park {
    private String carType;
    private Date inTime;

    private static final SimpleDateFormat sdf = new SimpleDateFormat("yyyyMMdd HHmm");

    public Park(String carType) {
        this.carType = carType;
        this.inTime = new Date();  // 현재 시간으로 입차 시간 설정
    }

    public String getCarType() {
        return carType;
    }

    public Date getInTime() {
        return inTime;
    }

    public String getFormattedInTime() {
        return sdf.format(inTime);
    }

    public long getParkingMinutes(Date outTime) {
        long diff = outTime.getTime() - inTime.getTime();
        return diff / 1000 / 60;
    }

    public int calculateFee(Date outTime) {
        long minutes = getParkingMinutes(outTime);
        if (minutes <= 10) {
            return 0;
        } else {
            long units = (minutes - 1) / 10; // 10분 초과는 10분 단위 요금 적용
            return (int)(units + 1) * 500;
        }
    }

    @Override
    public String toString() {
        return carType + "\t\t" + getFormattedInTime();
    }
}
