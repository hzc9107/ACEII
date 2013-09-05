#ifndef SCENE_H
#define SCENE_H

class Scene
{
public:
    Scene(double FunInitTime);
    char **GetPlayer();
    void AddPlayer(char *Player);
    double GetInitTime();
    double GetFinTime();
    void SetFinTime(double FunFinTime);
private:
    char **Players;
    double InitTime, FinTime;

};

#endif // SCENE_H
