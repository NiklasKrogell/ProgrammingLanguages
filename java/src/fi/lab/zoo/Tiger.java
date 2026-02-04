package fi.lab.zoo;

public class Tiger extends Animal {
    public enum Continent { Asia, Africa, Europe, NorthAmerica, SouthAmerica, Australia, Unknown }
    private Continent continent;

    public Tiger(){
        super();
        setContinent(Continent.Unknown);
    }
    public Tiger(String name, Date birth, double weight, Gender gender, Continent continent){
        super(name, birth, weight, gender);
        setContinent(continent);
    }
    public void setContinent(Continent continent){
        this.continent = continent;
    }
    public Continent getContinent() {
        return continent;
    }
    public void move(){
        System.out.println(name + " walks");
    }
    public void utter(){
        System.out.println(name + " roars");
    }
    @Override
    public String toString() {
        return "Tiger name=" + name + ", birth=" + birth + ", weight=" + weight + ", continent=" + continent
                + ", gender=" + gender;
    }
}
