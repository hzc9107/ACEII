#ifndef SCENE_H
#define SCENE_H
#include<QString>
#include<QVector>
class Scene
{
public:
    Scene(double FunInitTime, QString LabelPa):InitTime(FunInitTime), Label(LabelPa),FinTime(0){}
    void AddPlayer(int Player){
        Players += Player;
    }
    Scene(){}
    double GetInitTime(){
        return InitTime;
    }
    double GetFinTime(){
        return FinTime;
    }
    void SetFinTime(double FunFinTime){
        FinTime=FunFinTime;
    }
    QString GetLabel() const{
        return Label;
    }
    QVector<int> Players;

private:
    double InitTime, FinTime;
    QString Label;

};

#endif // SCENE_H
