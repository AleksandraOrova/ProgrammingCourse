#ifndef XOGAME_H
#define XOGAME_H


class XoGame
{
public:

    XoGame();
    void helloWorld();
    void setMyVar(int var);
    int  getMyVar();
    ~XoGame();

private:

    int myVar;
};

#endif // XOGAME_H
