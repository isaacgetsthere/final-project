#include <algorithm>
#include <cctype>
#include <fstream>
#include <iostream>
#include <string> 
#include <vector>
#include <windows.h>

struct player
{
    int hp;
};

struct kingCrab
{
    int hp;
};

struct golemBoss
{

};



struct knife
{
    int atk, dmg, maxDurability, currentDurability;
    
        void Attack()
        {
            if (currentDurability <= 0)
            {
                std::cout << "Well it was rusty.. it broke." << std::endl;
                return;
            }

            int dmg = 12;
            float chanceOfAttack = rand() % 10 + 1;
            if (chanceOfAttack < 8)
            {
                currentDurability--;

                std::cout << "You attacked for" << dmg 
                << " damage!" << "Durability: (" << currentDurability << "/" << maxDurability << std::endl;
                if (currentDurability <= 0)
                {
                    std::cout << "it kinda broke atleast you hit though" << std::endl;
                }
                
            }
            else
            {
                std::cout << "you missed" << std::endl;
            }
        }
};

knife newKnife()
{   
    
    knife generatedKnife;
    int randomDurability = rand() % 3 + 2;
    generatedKnife.dmg = 10;
    generatedKnife.maxDurability = randomDurability;
    generatedKnife.currentDurability = randomDurability;
    return generatedKnife;
}

struct pistol
{
    int atk, dmg, maxDurability, currentDurability;

    void Attack()
    {
        if (currentDurability <= 0)
        {
            std::cout << "Well I hoped your shots were good. it's out of ammo." << std::endl;
            return;
        }

        int dmg = 30;
        float chanceOfAttack = rand() % 4 + 1;
        if (chanceOfAttack < 5)
        {
            currentDurability--;

            std::cout << "You attacked for" << dmg
                << " damage!" << " Ammo: (" << currentDurability << "/" << maxDurability << std::endl;
            if (currentDurability <= 0)
            {
                std::cout << "it ran out of Ammo atleast you shot right?" << std::endl;
            }
        }
        else
        {
            std::cout << "you missed" << std::endl;
        }
    }
};

pistol newPistol()
{

    pistol generatedPistol;
    int pistolDurability = 3;
    generatedPistol.dmg = 10;
    generatedPistol.maxDurability = pistolDurability;
    generatedPistol.currentDurability = pistolDurability;
    return generatedPistol;
}

struct broadsword
{
    int atk, dmg, maxDurability, currentDurability;

    void Attack()
    {
        if (currentDurability <= 0)
        {
            std::cout << "Well it was mysterious" << std::endl;
            return;
        }

        int dmg = std::rand() & 100 + 1;
        float chanceOfAttack = rand() % 10 + 1;
        if (chanceOfAttack < 7)
        {
            currentDurability--;

            std::cout << "You attacked for" << dmg
                << " damage!" << "Durability: (" << currentDurability << "/" << maxDurability << std::endl;
            if (currentDurability <= 0)
            {
                std::cout << "it kinda broke atleast you hit though" << std::endl;
            }
            else
            {
                std::cout << "you missed" << std::endl;
            }
        }

    }
};

broadsword newbroadsword()
{

    broadsword generatedBroadsword;
    int randomDurability = rand() % 3 + 2;
    generatedBroadsword.dmg = 10;
    generatedBroadsword.maxDurability = randomDurability;
    generatedBroadsword.currentDurability = randomDurability;
    return generatedBroadsword;
}

int main()
{
    knife myKnife = newKnife();

    std::cout << "Hello, welcome to my world." << std::endl;
    std::cout << "You should now pick your weapon \033[31;1;4;5m(you are gonna need it)" << std::endl;
    std::string weapon;
    std::string continueOrNot = "yes";

    while (continueOrNot == "yes")
    {
        std::cout << "\033[0mWould you like to choose(rusty kitchen knife,old pistol,creepy broadsword, or nothing)(type each to see its qualities)" << std::endl;
        std::getline(std::cin, weapon);
        if (weapon == "rusty kitchen knife" || weapon == "knife")
        {
            std::cout << "stats: damage(12)chance of attack(70%)ammo\033[3m(its rusty)\033[0m" << std::endl;
            std::cout << "do you want to continue looking at the weapons?" << std::endl;
            std::getline(std::cin, continueOrNot);
        }
        else if (weapon == "old pistol" || weapon == "pistol")
        {
            std::cout << "stats: damage(40)chance of attack(\033[3m20%\033[0m)ammo(3 bullets)" << std::endl;
            std::cout << "do you want to continue looking at the weapons?" << std::endl;
            std::getline(std::cin, continueOrNot);
        }
        else if (weapon == "creepy broadsword" || weapon == "broadsword")
        {
            std::cout << "stats: damage(\033[35m???\033[0m) chance of attack (\033[35m???\033[0m) ammo(\033[35m???\033[0m)" << std::endl;
            std::cout << "do you want to continue looking at the weapons?" << std::endl;
            std::getline(std::cin, continueOrNot);
        }
        else if (weapon == "nothing")
        {
            std::cout << "stats: damage(0) chance of attack (0) ammo(0)" << std::endl;
            std::cout << "YOU CHOSE NOTHING. REALLY? what do you expect its nothing." << std::endl;
            std::cout << "I would recommend choosing something else!(yes/no)" << std::endl;
            std::getline(std::cin, continueOrNot);
        }
        else
        {
            std::cout << "Try again!" << std::endl;
        }
    }
    
    if (weapon == "rusty kitchen knife")
    {
        std::cout << "You chose rusty kitchen knife. Better hope it doesn't break." << std::endl;
    }
    else if (weapon == "old pistol")
    {
        std::cout << "You chose the old pistol. You better hope luck is on your side." << std::endl;
    }
    else if (weapon == "creepy broadsword")
    {
        std::cout << "\033[35mYou chose The Creepy Broadsword you must love mystery..\033[0m" << std::endl;
    }
    else if (weapon == "nothing")
    {
        std::cout << "\033[31mYou really chose nothing huh. Well good luck I guess.\033[0m" << std::endl;
    }

    std::cout << "" << std::endl;
    std::cout << "" << std::endl;


    std::cout << "\033[31mYou are getting chased down by zombie ducks. \nwhere do you wanna go?\033[0m" << std::endl;

    std::string location;
    std::string text = "Would you like to choose (The abandoned mines, The island, creeky cave, nothing)";
    
    // Loop through each character in the string
    for (char c : text) 
    {
        std::cout << c;
        std::cout.flush(); // Forces the character to display right away
        Sleep(75);         
    }
    std::cout << "\033[30m job \033[0m" << std::endl;
    std::getline(std::cin, location);
    
    std::string minesChoice;
    if (location == "The abandoned mines" || location == "mines" || location == "abandoned mines")
    {
        std::cout << "You chose the mines. You hear the sound of screeching but don't know where it's from" << std::endl;
        std::cout << "There is rail tracks look like there was a crash. There is an abandoned cart." << std::endl;
        std::cout << "Do you wanna go look in the cart or do you wanna go look further?" << std::endl;
        std::getline(std::cin, minesChoice);

        std::transform(minesChoice.begin(), minesChoice.end(), minesChoice.begin(), ::tolower);
        while(!(minesChoice.find("further") != std::string::npos))
        {
            std::cout << "You look into it..." << std::endl;
            Sleep(3000);
            std::cout << "There was just an isty bisty spider. You are good." << std::endl;
            std::cout << " " << std::endl;
            std::cout << "do you wanna look in the cart again or go further into the cave" << std::endl;
            std::getline(std::cin, minesChoice);
        }
        std::cout << "You go look further.\nThere is the sound of dripping water.\nYou hear a low growl" << std::endl;
        std::cout << "You see what looks like a diamond and go investigate." << std::endl;
        std::cout << " " << std::endl;
        std::cout << "You have fight the golem boss. good luck! Hope you chose the right weapon." << std::endl;
    }
    else if (location == "The island" || location == "island" || location == "Island")
    {
        std::string islandChoice;
        std::cout << "You wake up on a beach surrounded by sea stars in the shape of your body... weird" << std::endl;
        std::cout << "The waves move back and forth as if something disturbed them." << std::endl;
        std::cout << "do you wanna take the chance and wait for help or do you wanna walk around" << std::endl;
        std::getline(std::cin, islandChoice);

        std::transform(islandChoice.begin(), islandChoice.end(), islandChoice.begin(), ::tolower);

        if (islandChoice.find("help") != std::string::npos)
        {
            std::cout << "You wait for help and get rescued" << std::endl;
        }
        else
        {
            std::cout << "You walk around and find it looks like someone was here" << std::endl;
            std::cout << "The coconuts look eaten.." << std::endl;
            Sleep(750);
            std::cout << "You ";
            Sleep(750);
            std::cout << "have ";
            Sleep(750);
            std::cout << "to ";
            Sleep(750);
            std::cout << "fight ";
            Sleep(750);
            std::cout << "the ";
            Sleep(750);
            std::cout << "Crab ";
            Sleep(750);
            std::cout << "King" << std::endl;
        }
    }
    else if (location == "creeky cave" || location == "Creeky cave" || location == "cave")
    {
        std::cout << ("You chose Creeky Cave. \nYou hear the sound of dripping water.\nYou walk forward to get closer to the sound.") << std::endl;
        std::cout << ("You turn on your flashlight.. and see you almost fell into water.. it looks pretty deep.") << std::endl;
        std::cout << ("do you want to see how far down it goes or look for another place in the cave.") << std::endl;
        
        std::cout << ("You have to fight the Turtle Muncher!") << std::endl;
    }
    else if (location == "nothing" || location == "Nothing")
    {
        if (weapon == "nothing")
        {
            std::cout << "OH REALLY. You chose nothing again. Shame on you. well you get what you hope for.";
        }
        else
        {
            std::cout << "so you dont wanna play the game? alright then." << std::endl;
        }
    }
    else
    {
        std::cout << "reload the game right now!" << std::endl;
    }
}

//void fighting(std::string minesChoice, std::string weapon,std::string location, std::string islandChoice)
//{
//    if (location == "The island")
//    {
//
//    }
//}