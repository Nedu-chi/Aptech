public class Cat extends Animal {
    public Cat(String name, int age, String breed) {
        super(name, age, breed);
    }

    @Override
    public void makesound() {
        System.out.println(getName() + " says: Meow!");
    }

    public void purr() {
        System.out.println(getName() + " is purring.");
    }
}