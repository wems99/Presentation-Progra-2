//
// Created by Tere Solano on 5/10/2020.
//

#ifndef PRESENTATION_PROGRA_2_PROTOTYPEPANT_H
#define PRESENTATION_PROGRA_2_PROTOTYPEPANT_H
#include <sstream>
enum Type{

    P1 = 0,
    P2

};

#include <iostream>
using namespace std;

class PrototypePant {
private:
    char size;
    string color;
    string material;
    string brand;
public:


    PrototypePant(char size, const string &color, const string &material, const string &brand);

    virtual ~PrototypePant();

    char getSize() const;

    void setSize(char size);

    const string &getColor() const;

    void setColor(const string &color);

    const string &getMaterial() const;

    void setMaterial(const string &material);

    void setBrand(const string &brand);

    const string &getBrand() const;

    virtual PrototypePant *clone() = 0;

    virtual string printAMassage(char, string);

};


#endif //PRESENTATION_PROGRA_2_PROTOTYPEPANT_H
