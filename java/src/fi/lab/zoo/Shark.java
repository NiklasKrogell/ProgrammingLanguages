package fi.lab.zoo;

public class Shark extends Animal {
    public enum Sea { Pacific, Atlantic, Indian, Arctic, Antarctic, Unknown }
    private Sea sea;

    public Shark(){
        super();
        setSea(Sea.Unknown);
    }
    public Shark(String name, Date birth, double weight, Gender gender, Sea sea){
        super(name, birth, weight, gender);
        setSea(sea);
    }

    public Sea getSea() {
        return sea;
    }
    public void setSea(Sea sea) {
        this.sea = sea;
    }
    public void move(){
        System.out.println(name + " swims");
    }
    public void utter(){
        System.out.println(name + " makes bubbles");
    }
    @Override
    public String toString() {
        return "Shark name=" + name + ", birth=" + birth +  ", weight=" + weight + ", sea=" + sea + ", gender=" + gender;
    }
    
}
