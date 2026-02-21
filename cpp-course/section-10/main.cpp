#include <iostream>
#include <string>


using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    string alphabet {"[ abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key  {" [XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};

    string message{};
    getline(cin, message);

    for (size_t i = 0; i < message.length(); i++){
        message.at(i) = key.at(alphabet.find(message.at(i)));
    }

    cout << "Your encrypted message is: " << message << endl;

    for (size_t i = 0; i < message.length(); i++){
        message.at(i) = alphabet.at(key.find(message.at(i)));
    }
    cout << "And your dencrypted message is: " << message << endl;


    return 0;
}
