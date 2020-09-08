import java.util.Scanner;
import java.util.*;

// A class defines the attributes (fields) and capabilities (methods) of a real world object

public class Animal{
    
    // Static means this number is shared by all objects of type Animal
    // Final means this can't be overridden
    public static final double FAVNUMBER = 1.6180;

    // private fields can only be accessed by other methods in the class

    private String name;
    // -2^31 to (2^31)-1
    private int weight;
    private boolean hasOwner = false;
    // -128 to 127
    private byte age;
    // -2^63 to (2^63)-1
    private long uniqueID;
    // Chars are unsigned ints that represent UTF-16 codes from 0 to 65535
    private char favoriteChar;
    private double speed; //64 bit
    private float height; //32 bit

    // Static variables have the same value for every object
    // protected means that this value can only be accessed by other code in the same package or by subclasses in other packages
    protected static int numberOfAnimals = 0;

    static Scanner userInput = new Scanner(System.in);

    // Any time an Animal object is created this function called the constructor is called to initialize the object

    public Animal(){

        numberOfAnimals++;
        
        System.out.print("Enter the name: \n");


        if(userInput.hasNextLine()){
            // this provides us with a way to refer to the object itself
            // userInput.nextLine() returns the value that was entered
            this.setName(userInput.nextLine());

            // hasNextInt, hasNextFloat, hasNextDouble, hasNextBoolean, hasNextByte
            // hasNextLong, nextInt, nextDouble, nextFloat, nextBoolean, etc
        }

        this.setFavoriteChar();
        this.setUniqueID();
    }

    //Use getter and setter methods to protect your data

    public String getName(){
        return name;
    }

    public void setName(String name){
        this.name = name;
    }

    public int getWeight(){
        return weight;
    }

    public void setWeight(int weight){
        this.weight = weight;
    }

    public boolean isHasOwner(){
        return hasOwner;
    }

    public void setHasOwner(boolean hasOwner){
        this.hasOwner = hasOwner;
    }

    public byte getAge(){
        return age;
    }

    public void setAge(byte age){
        this.age = age;
    }

    public long getUniqueID(){
        return uniqueID;
    }

    public void setUniqueID(long uniqueID){
        this.uniqueID = uniqueID;
        System.out.println("Unique ID set to: " + this.uniqueID);
    }

    public void setUniqueID(){
        long minNumber = 1;
        long maxNumber = 1000000;

        this.uniqueID = minNumber + (long)(Math.random() * ((maxNumber-minNumber) + 1));

        // (byte) (short) (long) (double)
        // (float) (boolean) (char) don't work

        // Conversion from primitive to string
        String stringNumber = Long.toString(maxNumber);

        // String to Primitive
        int numberString = Integer.parseInt(stringNumber);

        System.out.println("Unique ID set to: " + this.uniqueID);
    }

    public char getFavoriteChar(){
        return favoriteChar;
    }

    public void setFavoriteChar(char favoriteChar){
        this.favoriteChar = favoriteChar;
    }

    public void setFavoriteChar(){
        int randomNumber = (int)(Math.random() * 126) + 1;
        this.favoriteChar = (char) randomNumber;

        System.out.println("Favorite Character set to: " + this.favoriteChar);
    }

    public double getSpeed(){
        return speed;
    }

    public void setSpeed(double speed){
        this.speed = speed;
    }

    public float getHeight(){
        return height;
    }

    public void setHeight(float height){
        this.height = height;
    }

    protected static int getNumberOfAnimals(){
        return numberOfAnimals;
    }

    // Since numberOfAnimals is static you must set value using class name
    public void setNumberOfAnimals(int numberOfAnimals){
        Animal.numberOfAnimals = numberOfAnimals;
    }

    protected static void countTo(int startingNumber){
        for(int i=startingNumber ; i<=100 ; i++){
            if(i==90)
                continue;
            System.out.println(i);
        }
    }

    // Demonstrate Polymorphism

    public String makeSound(){
        return "Grrrr";
    }

    // With Polymorphism we can refer to any Animal and yet use overridden methods
    // in the specific animal type

    public static void speakAnimal(Animal randAnimal){
        System.out.println("Animal says: " + randAnimal.makeSound());
    }

    // public allows other classes to use this method
    // static means that only a class can call for this to execute
    // void means it doesn't return a value when it finishes executing
    // this method excepts Strings that can be stored in the string array args
    // when it is executed
    public static void main(String[] args){

        Animal theDog = new Animal();

        System.out.println("The animal is named " + theDog.getName());

        Animal.countTo(100);

        //Arrays:
        // int[] favoriteNumbers;
        // favoriteNumbers = new int[20];

        int[] favoriteNumbers = new int[20];

        favoriteNumbers[0] = 100;

        String[] stringArray = {"Random", "Words", "Here"};

        // for(dataType[] varForRow : arrayName)
        for(String word : stringArray){
            System.out.println(word);
        }

        // Multi-dimensional Array
        String[][][] arrayName = {{ { "000" }, { "100" }, { "200" }, { "300" } }, { { "010" }, { "110" }, { "210" }, {"310" } }, { { "020" }, { "120" }, { "320"}}};

        for(int i=0 ; i<arrayName.length ; i++){
            for(int j=0 ; j<arrayName[i].length ; j++){
                for(int k=0 ; k<arrayName[i][j].length ; k++){
                    System.out.print("| " + arrayName[i][j][k] + " ");
                }
            }
            System.out.println("|");
        }

        // Copy an array (stringToCopy, indexes to copy)
        String[] cloneOfArray = Arrays.copyOf(stringArray, 3);

        // Print whole array
        System.out.println(Arrays.toString(cloneOfArray));

    }
}


