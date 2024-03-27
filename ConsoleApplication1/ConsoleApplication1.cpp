#include <iostream>

// Abstract Product Interface
class Warrior {
public:
    virtual void summon() = 0;
};

// Concrete FireWarrior FireFighter
class FireFighter : public Warrior {
public:
    void summon() override
    {
        setlocale(LC_ALL, "Russian");
        std::cout << "Создание Огненного воина"
            << std::endl;
    }
};

// Concrete FireWarrior FireWizard
class FireWizard : public Warrior {
public:
    void summon() override
    {
        setlocale(LC_ALL, "Russian");
        std::cout
            << "Создание Огненного мага"
            << std::endl;
    }
};
//Concrete FireWarrior FireArcher
class FireArcher : public Warrior {
public:
    void summon() override
    {
        setlocale(LC_ALL, "Russian");
        std::cout
            << "Создание Огненного Стрелка"
            << std::endl;
    }
};



// Concrete Water Warrior WaterFighter
class WaterFighter : public Warrior {
public:
    void summon() override
    {
        setlocale(LC_ALL, "Russian");
        std::cout << "Создание Водного воина"
            << std::endl;
    }
};

// Concrete Water Warrior WaterWizard
class WaterWizard : public Warrior {
public:
    void summon() override
    {
        setlocale(LC_ALL, "Russian");
        std::cout << "Создание водного мага"
            << std::endl;
    }
};
// Concrete Water Warrior WaterArcher
class WaterArcher : public Warrior {
public:
    void summon() override
    {
        setlocale(LC_ALL, "Russian");
        std::cout << "Создание Водного cтрелка"
            << std::endl;
    }
};

// Abstract Factory Interface
class WarriorFactory {
public:
    virtual Warrior* createFighter() = 0;
    virtual Warrior* createWizard() = 0;
    virtual Warrior* createArcher() = 0;
};

// Concrete FireWarrior
class FireWarriorFactory : public WarriorFactory {
public:
    Warrior* createFighter() override
    {
        return new FireFighter();
    }

    Warrior* createWizard() override
    {
        return new FireWizard();
    }
    Warrior* createArcher() override
    {
        return new FireArcher();
    }
};

// Concrete WaterWarrior
class WaterWarriorFactory : public WarriorFactory {
public:
    Warrior* createFighter() override
    {
        return new WaterFighter();
    }

    Warrior* createWizard() override
    {
        return new WaterWizard();
    }
    Warrior* createArcher() override
    {
        return new WaterArcher();
    }
};

int main()
{
    // Create a FireWarrior Factory
    WarriorFactory* FireFactory
        = new FireWarriorFactory();
    Warrior* FireFighter
        = FireFactory->createFighter();
    Warrior* FireWizard
        = FireFactory->createWizard();
    Warrior* FireArcher
        = FireFactory->createArcher();

    // Create a WaterWarrior Factory
    WarriorFactory* WaterFactory
        = new WaterWarriorFactory();
    Warrior* WaterFighter
        = WaterFactory->createFighter();
    Warrior* WaterWizard
        = WaterFactory->createWizard();
    Warrior* WaterArcher
        = WaterFactory->createArcher();


    // Summon the desired units
    FireFighter->summon();
   

    FireWizard->summon();
   

    FireArcher->summon();
 

    WaterFighter->summon();
 

    WaterWizard->summon();
   

    WaterArcher->summon();
   

    // Clean up
    delete FireFactory;
    delete FireFighter;
    delete FireWizard;
    delete FireArcher;
    delete WaterFactory;
    delete WaterFighter;
    delete WaterWizard;
    delete WaterArcher;


    return 0;
}