public class Dog extends Animal{
    
    public Dog(){

    }

    public String makeSound(){
        return "Woof";
    }

    public static void main(String[] args){

        Dog fido = new Dog();
        fido.setName("Fido");
        System.out.println(fido.getName());
    }
}
