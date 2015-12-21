#ifndef HOMECPP_H
#define HOMECPP_H

/// это самый бредовый класс...
/// у него бредовое название, он бредовый по сути
/// Сделайте лучше класс прямоугольника, у которого будет два поля, которые инициализируются в конструкторе,
/// и методы гет, для каждого поля (длина, ширино)
/// и метод, которые принимает два объекта такого же класса, и возврадает bool, если два помещаются в одного
class HomeCPP
{
public:
    /// И они у вас в public доступе, кто угодно может поменять в любой момент
    int length_horizontal_a;
    int length_vertical_a;
    int length_horizontal_h1;
    int length_vertical_h1;
    int length_horizontal_h2;
    int length_vertical_h2;
    HomeCPP(int, int, int, int, int, int);
    /// а если и так, то почему нет ключевых слов const нигде в классе
    /// в С++ есть тип bool
    int doWork();
};

#endif // HOMECPP_H
