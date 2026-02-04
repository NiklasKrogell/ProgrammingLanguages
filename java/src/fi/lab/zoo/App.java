//
// Niklas Krogell
// Ohjelmointikielet 2025

package fi.lab.zoo;

import fi.lab.zoo.Animal.Gender;
import fi.lab.zoo.Shark.Sea;
import fi.lab.zoo.Tiger.Continent;

public class App {
    public static void main(String[] args) throws Exception {
        Zoo zoo = new Zoo();
        Shark hai = new Shark("Siiri", new Date(20, 2, 2011), 50, Gender.Female, Sea.Indian);
        Tiger tikru = new Tiger("Jaska", new Date(1, 3, 2005), 70, Gender.Male, Continent.Europe);
        zoo.add(hai);
        zoo.add(tikru);
        zoo.add(new Tiger());
        zoo.add(new Shark("Pena", new Date(1, 13, 2000), 105, Gender.Male, Sea.Atlantic));
        zoo.add(new Shark("Niklas", new Date(18, 5, 2003), 100, Gender.Male, Sea.Atlantic));
        zoo.add(new Tiger("Aapo", new Date(19, 5, 2003), 20, Gender.Male, Continent.Asia));
        System.out.println("Removed: " + zoo.remove("Pena").toString());
        zoo.printSortedByName();
        hai.move();
        hai.utter();
        tikru.move();
        tikru.utter();
        zoo.printSortedByAge();
    }
}
