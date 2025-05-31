#ifndef TMENU_H
#define TMENU_H

#include<string>
#include"./tcrypter.h"

/**
 * @todo write docs
 */
class TMenu
{
public:
    void Chouse();
private:
    void Crypt();
    void Decrypt();
    void Generate_new_key();
    void Exit();

    std::string Welcome_message{"Welcome to RSA De/Cryptor!\nby:Papyrus219\n\n"};
    std::string Option_message{"1.Crypt\n2.Decrypt\n3.Generate_new_key\n4.Exit\n\nChouse option: "};
    std::string Generate_message{"Enter two odd numbers: "};
    std::string Text_message{"Enter text to "};
    std::string Public_key_message{"Enter public key: "};
    std::string Private_key_message{"Enter private key: "};

    bool program_loop{true};
    TNumber_tester tester{};
    TCrypter crypter{};
};

#endif // TMENU_H
