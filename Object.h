//
// Created by Mark McCorkle on 2/25/22.
//
#ifndef UALR___P2___POWER_PLAY_6_OBJECT_H
#define UALR___P2___POWER_PLAY_6_OBJECT_H

    #include <map>      // Header files should be dependency-inclusive
    #include <random>   // Header files should be dependency-inclusive

    class Object
    {
    public:
        static std::random_device seed;
        static std::default_random_engine engine;
        enum class Type { player, slime, orc, sprite, dragon, numTypes };

        // Constructors:
        Object() = default;             // Default
        Object( Type, int, int, int );  // Conversion

        // Class Member Functions:
        int getLevel() const;
        void printName() const; // Will need to change to use the operator overload
        bool isDead() const;

    protected:
        Type name{ Type::player };
        int strength{ 0 };
        int health{ 0 };
        int level{ 0 };

        // Insertion operator overloading using Friend declaration to access private members from outside the class:
        // Source: https://www.learncpp.com/cpp-tutorial/overloading-the-io-operators/
        friend std::ostream& operator<<( std::ostream& COUT, const Object& object );

    private:

    };

#endif //UALR___P2___POWER_PLAY_6_OBJECT_H
