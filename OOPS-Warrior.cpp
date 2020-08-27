#include<bits/stdc++.h>
using namespace std;

class Warrior{

    private:

        int attackMax;
        int blockMax;

    public:

        string name;
        int health;

        Warrior(string name, int health, int attackMax, int blockMax){
            this->name = name;
            this->health = health;
            this->attackMax = attackMax;
            this->blockMax = blockMax;
        }

        int attack(){
            return rand() % this->attackMax;
        }

        int block(){
            return rand() % this->blockMax;
        }

};

class Battle{

    public:

        static void startFight(Warrior& warrior1, Warrior& warrior2){
            while(true){
                if(Battle::getAttackResult(warrior1, warrior2).compare("Game Over") == 0){
                    cout<<"Game Over\n";
                    break;
                }
                if(Battle::getAttackResult(warrior2, warrior1).compare("Game Over") == 0){
                    cout<<"Game Over\n";
                    break;
                }
            }
        }
        

        static string getAttackResult(Warrior& warriorA, Warrior& warriorB){
            int warriorAattackAmount = warriorA.attack();
            int warriorBblockAmount = warriorB.block();
            int damage2WarriorB = ceil(warriorAattackAmount - warriorBblockAmount);
            damage2WarriorB = (damage2WarriorB <= 0) ? 0 : damage2WarriorB;
            warriorB.health = warriorB.health - damage2WarriorB;
            warriorB.health = (warriorB.health <= 0) ? 0 : warriorB.health;
            printf("%s attacks %s with %d force. %s blocks %d attack. Damage dealt: %d\n", warriorA.name.c_str(), warriorB.name.c_str(), warriorAattackAmount, warriorB.name.c_str(), warriorBblockAmount, damage2WarriorB);
            printf("%s is down to %d health\n", warriorB.name.c_str(), warriorB.health);
            if(warriorB.health == 0){
                printf("%s has died and %s is victorious\n", warriorB.name.c_str(), warriorA.name.c_str());
                return "Game Over";
            }else{
                return "Fight Again";
            }

        }
};

int main(){
    srand(time(NULL));
    Warrior thor("Thor", 100, 30, 15);
    Warrior hulk("Hulk", 100, 30, 15);

    Battle::startFight(thor, hulk);

    return 0;
}
