#ifndef XOGAME_H
#define XOGAME_H


class Set
{
public: // тип, к которому можно обращаться повсюду

    Set();
    void Copy();
    void Summa();
    void Intersection();
    void Add();
    void Include();
    void setMyVar(int var);
    int  getMyVar();
    ~Set();

private: // тип, к которому можно подключиться только в этом файле

    int myVar;
};

#endif // XOGAME_H
