#ifndef BANKCPP_H
#define BANKCPP_H


/// Лучше сделайте этот класс без полей с единственным static методом, который будет считать процент
///
class BankCPP
{
public:
/// Да почему же float, а не double, float на несколько байтом меньше double, но на порядки менее точный
///
/// И они у вас в public доступе, кто угодно может поменять в любой момент
    float summa;
    float percent;
    BankCPP(float, float);
    /// а если и так, то почему нет ключевых слов const нигде в классе
    float doWork();
};

#endif // BANKCPP_H
