package fi.lab.zoo;

public abstract class Animal {
    public enum Gender{ Male, Female, Unknown }
    protected String name;
    protected Date birth;
    protected double weight;
    protected Gender gender;

    public Animal(){
        setName("Muukalainen");
        setBirth(new Date());
        setWeight(100);
        setGender(Gender.Unknown);
    }
    public Animal(String name, Date birth, double weight, Gender gender){
        setName(name);
        setBirth(birth);
        setWeight(weight);
        setGender(gender);
    }
    public String getName() {
        return name;
    }
    public void setName(String name) {
        this.name = name;
    }
    public Date getBirth() {
        return birth;
    }
    public void setBirth(Date birth) {
        this.birth = birth;
    }
    public double getWeight() {
        return weight;
    }
    public void setWeight(double weight) {
        this.weight = weight;
    }
    public Gender getGender() {
        return gender;
    }
    public void setGender(Gender gender) {
        this.gender = gender;
    }
    
    @Override
    public String toString() {
        return "Animal name=" + name + ", birth=" + birth + ", weight=" + weight + ", gender=" + gender;
    }
    public abstract void move();
    public abstract void utter();
}
