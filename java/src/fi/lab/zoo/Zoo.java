package fi.lab.zoo;

import java.util.Comparator;
import java.util.Map;
import java.util.TreeMap;

public class Zoo {
    private Map<String,Animal> animals = new TreeMap<>();

    public Animal add(Animal a){
        return animals.put(a.getName(), a);
    }
    public Animal remove(String name){
        return animals.remove(name);
    }
    public void printSortedByName(){
        System.out.println("---------- Animals sorted by name: ------------------");
        animals.entrySet().stream()
            .sorted(Map.Entry.comparingByKey())
            .forEach(entry->{System.out.println(entry.getKey() + 
                ", " + entry.getValue().toString());});
    }
    public void printSortedByAge(){
        System.out.println("---------- Animals sorted by age: ------------------");
        animals.values().stream()
            .sorted(Comparator.comparing(Animal::getBirth))
            .forEach(System.out::println);
    }
}
