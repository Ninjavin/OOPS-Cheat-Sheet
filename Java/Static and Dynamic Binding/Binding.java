public class Binding{

    // test1 is overloaded
    // One of them takes Person and other Student

    public static void test1(Person x){
        System.out.println("Lol Person");
    }

    public static void test1(Student y){
        System.out.println("Lol Student");
    }

    public static void main(String[] args){
    
        Person p = new Person();
        Student s = new Student();

    // At Compile Time, p2 is a person
    // At Run Time, p2 is a student

        Person p2 = new Student();


        // Here p2 is taken as a person... we would get Lol Person as output... Done during Compile time
        test1(p2);
        
        p2.talk();
    }

}
