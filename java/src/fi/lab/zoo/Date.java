package fi.lab.zoo;

public class Date implements Comparable<Date> {
    private int day;
    private int month;
    private int year;

    public Date(){
        setValues(1, 1, 2000);
    }
    public Date(int day, int month, int year){
        if(!setValues(day, month, year)){
            setValues(1, 1, 2000);
        }
    }
    private boolean isLeapYear(int year){
        if(year % 400 == 0) return true;
        if(year % 100 == 0) return false;
        if(year % 4 == 0) return true;
        return false;
    }
    private boolean setValues(int day, int month, int year){
        if(year < 1900 || year > 2030) return false;
        if(month < 1 || month > 12) return false;
        int maxDays[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        if(isLeapYear(year)) maxDays[2] = 29;
        if(day < 1 || day > maxDays[month]) return false;
        setDay(day);
        setMonth(month);
        setYear(year);
        return true;
    }
    public void setDay(int day) {
        this.day = day;
    }
    public void setMonth(int month) {
        this.month = month;
    }
    public void setYear(int year) {
        this.year = year;
    }
    public int getDay() {
        return day;
    }
    public int getMonth() {
        return month;
    }
    public int getYear() {
        return this.year;
    }
    @Override
    public String toString() {
        return day + "." + month + "." + year;
    }
    @Override
    public int compareTo(Date o) {
        if (this.year != o.year) {
            return Integer.compare(this.year, o.year);
        } else if (this.month != o.month) {
            return Integer.compare(this.month, o.month);
        } else {
            return Integer.compare(this.day, o.day);
        }
    }
    
}
