#include <iostream>
#include <string>
using namespace std;
class character
{
public:
    string name;
    int Health = 100;
    int Energy = 500;
    int Shield = 0;
    character(string n) : name(n) {}
    void useshield(int &damage, int &saving)
    {
        damage = max(0, damage - (damage * saving) / 100);
    }
    virtual void print(string gadget, int opponenthealth)
    {
        cout << name << " used " << gadget << '.' << endl;
        cout << "remining energy:" << Energy << endl;
        cout << "opponent's ramaining health:" << opponenthealth << endl;
    }
};
class Batman : public character
{
public:
    int grapple_gun = 5;
    int Explosive_Gel = 3;
    int Batclaw = 1;
    int Smoke_Pellet = 2;
    Batman() : character("Batman") {};
    void usebatarang(character &opponent)
    {
        if (Energy >= 50)
        {
            Energy = Energy - 50;
            opponent.Health -= 11;
            print("batarang", opponent.Health);
        }
        else
        {
            cout << "No batarang" << endl;
        }
    }
    void usegrapple_gun(character &opponent)
    {
        if (grapple_gun > 0 && Energy >= 88)
        {
            Energy = Energy - 88;
            grapple_gun--;
            opponent.Health -= 18;
            print("grapple gun", opponent.Health);
        }
        else
        {
            cout << "No grapple gun" << endl;
        }
    }
    void useExplosive_Gel(character &opponent)
    {
        if (Explosive_Gel > 0 && Energy >= 92)
        {
            Energy = Energy - 92;
            Explosive_Gel--;
            opponent.Health -= 10;
            print("Explosive Gel", opponent.Health);
        }
        else
        {
            cout << "No Explosive Gel" << endl;
        }
    }
    void useBatclaw(character &opponent)
    {
        if (Batclaw > 0 && Energy >= 120)
        {
            Energy = Energy - 120;
            Batclaw--;
            opponent.Health -= 20;
            print("Batclaw", opponent.Health);
        }
        else
        {
            cout << "No Batclaw" << endl;
        }
    }
    void useCape_Glide(character &opponent)
    {
        if (Energy >= 20)
        {
            Energy = Energy - 20;
            print("Cape Glide", opponent.Health);
        }
        else
        {
            cout << "No Cape Glide" << endl;
        }
    }
    void useSmoke_Pellet(character &opponent)
    {
        if (Smoke_Pellet > 0 && Energy >= 50)
        {
            Energy = Energy - 50;
            Smoke_Pellet--;
            print("Smoke Pellet", opponent.Health);
        }
        else
        {
            cout << "No Smoke Pellet" << endl;
        }
    }
};
class Joker : public character
{
public:
    int Laughing_Gas = 8;
    int Acid_Flower = 3;
    int Rubber_Chicken = 3;
    Joker() : character("Joker") {};
    void useJoy_Buzzer(character &opponent)
    {
        if (Energy >= 40)
        {
            Energy = Energy - 40;
            opponent.Health -= 8;
            print("Joy Buzzer", opponent.Health);
        }
        else
        {
            cout << "No Joy Buzzer" << endl;
        }
    }
    void useLaughing_Gas(character &opponent)
    {
        if (Laughing_Gas > 0 && Energy >= 56)
        {
            Energy = Energy - 56;
            Laughing_Gas--;
            opponent.Health -= 13;
            print("Laughing Gas", opponent.Health);
        }
        else
        {
            cout << "No Laughing Gas" << endl;
        }
    }
    void useAcid_Flower(character &opponent)
    {
        if (Acid_Flower > 0 && Energy >= 100)
        {
            Energy = Energy - 100;
            Acid_Flower--;
            opponent.Health -= 22;
            print("Acid Flower", opponent.Health);
        }
        else
        {
            cout << "No Acid Flower" << endl;
        }
    }
    void useTrick_Shield(character &opponent)
    {
        if (Energy >= 15)
        {
            Energy = Energy - 15;
            print("Trick Shield", opponent.Health);
        }
        else
        {
            cout << "NO Trick Shield" << endl;
        }
    }
    void useRubber_Chicken(character &opponent)
    {
        if (Rubber_Chicken > 0 && Energy >= 40)
        {
            Energy = Energy - 40;
            Rubber_Chicken--;
            print("Rubber Chicken", opponent.Health);
        }
        else
        {
            cout << "No Rubber Chicken" << endl;
        }
    }
};
void check(int bathealth, int jokhealth)
{
    if (bathealth <= 0)
    {
        cout << "joker win" << endl;
    }
    else if (jokhealth <= 0)
    {
        cout << "batman win" << endl;
    }
}
int main()
{
    Batman batman;
    Joker joker;
    batman.usebatarang(joker);
    joker.useAcid_Flower(batman);
    batman.useExplosive_Gel(joker);
    joker.useAcid_Flower(batman);
    batman.useExplosive_Gel(joker);
    joker.useAcid_Flower(batman);
    batman.useExplosive_Gel(joker);
    joker.useJoy_Buzzer(batman);
    batman.useBatclaw(joker);
    joker.useLaughing_Gas(batman);
    batman.usebatarang(joker);
    joker.useJoy_Buzzer(batman);
    batman.usebatarang(joker);
    joker.useJoy_Buzzer(batman);
    check(batman.Health, joker.Health);
    return 0;
}
