#ifndef PLAYER_H
#define PLAYER_H
#include <QString>
class Player{
public:
    QString Name, Tag;
    int Number;
    Player(QString Name_Val, QString Tag_Val, int Number_Val):Name(Name_Val), Tag(Tag_Val),Number(Number_Val){}
    Player(){}
    bool operator==(const Player &playerC) const{
        return this->Tag == playerC.Tag;
    }
};
#endif // PLAYER_H
