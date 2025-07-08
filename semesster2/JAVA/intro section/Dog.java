public class Dog extends Animal {
    public Dog(String name, int age, String breed) {
        super(name, age, breed);
    }

    @Override
    public void makesound() {
        System.out.println(getName() + " says: Bark");
    }
}
