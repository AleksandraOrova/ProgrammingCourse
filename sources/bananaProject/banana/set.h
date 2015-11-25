#ifndef XOGAME_H
#define XOGAME_H
#define N 20

class Set
{
public: // тип, к которому можно обращаться повсюду

    Set();
    void Copy();
    void Summa();
    void Intersection(int A, int B);
    void Add();
    void Include();
    void setMyVar(int var);
    int  getMyVar();
    ~Set();

private: // тип, к которому можно подключиться только в этом файле

    int myVar;
};

class Elementary
{
public:
    Elementary();
private:

};

#endif // XOGAME_H
