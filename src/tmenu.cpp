#include "tmenu.h"
#include<iostream>
#include <limits>

void TMenu::Chouse()
{
    while(program_loop)
    {
        system("clear");
        std::cout << Welcome_message << Option_message;
        char option{};
        std::cin >> option;

        switch(option)
        {
            case '1':
                Crypt();
                break;
            case '2':
                Decrypt();
                break;
            case '3':
                Generate_new_key();
                break;
            case '4':
                Exit();
                break;
            default:
                std::cout << "Invalid argument!\nType anything to continue.\n";
                char a{};
                std::cin >> a;
                break;
        }
    }

}

void TMenu::Crypt()
{
    system("clear");
    int M{},e{},n{};

    std::cout << Text_message << "crypt: ";
    std::cin >> M;

    std::cout << Public_key_message;
    std::cin >> e >> n;

    std::cout << "Crypted text is: " << crypter.Crypt(M,e,n,tester) << "\n";

    std::cout << "\n\nEnter anything to continue.\n";
    char a{};
    std::cin >> a;
}

void TMenu::Decrypt()
{
    system("clear");
    int C{},d{},n{};

    std::cout << Text_message << "decrypt: ";
    std::cin >> C;

    std::cout << Private_key_message;
    std::cin >> d >> n;

    std::cout << "Orginal text was: " << crypter.Decrypt(C,d,n,tester) << "\n";

    std::cout << "\n\nEnter anything to continue.\n";
    char a{};
    std::cin >> a;
}

void TMenu::Generate_new_key()
{
    system("clear");
    int P{4},Q{4};

    while(!tester.IsOdd(P) || !tester.IsOdd(Q))
    {
        std::cout << Generate_message;
        std::cin >> P >> Q;

        if(!tester.IsOdd(P))
            std::cout << "First number is not odd!\n";
        if(!tester.IsOdd(Q))
            std::cout << "Second number is not odd!\n";
    }

    crypter.Generate_new_keys(P,Q,tester);

    std::cout << "\nEnter anything to continue.";
    char a{};
    std::cin >> a;
}

void TMenu::Exit()
{
    program_loop = false;
}
