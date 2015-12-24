#include <QString>
#include <QtTest>
#include "bankcpp.h"
#include "cmtoinchcpp.h"
#include "matrixcpp.h"
#include "stringscpp.h"
#include "exception.h"
class TestCPPTest : public QObject
{
    Q_OBJECT

public:
    TestCPPTest();

private Q_SLOTS:
    void bank_test();
    void home_test();
    void cm2inch_test();
    void matrix_test();
    void strings_test();
};

TestCPPTest::TestCPPTest(){

}

<<<<<<< HEAD
=======
/// Это зачем???
void TestCPPTest::testCase1(){
    QVERIFY2(true, "Failure");
}


>>>>>>> 745ff464e96b4d4520f39862ad444ec10491c09c
void TestCPPTest::bank_test(){
    QCOMPARE(BankCPP().compoundInterest(200, 25), 610.35f);
    QCOMPARE(BankCPP().compoundInterest(10, 90), 247.60f);
    QVERIFY_EXCEPTION_THROWN(BankCPP::compoundInterest(-100, 50), UnderNullExceptionSumma);
    QVERIFY_EXCEPTION_THROWN(BankCPP::compoundInterest(100, 105), MoreThanHundred);
}

void TestCPPTest::home_test(){
    Rectangle area(40,70);
    Rectangle rect1(30,30);
    Rectangle rect2(30,30);
    QVERIFY2(area.canInsert(rect1, rect2), "Failure");
}

void TestCPPTest::cm2inch_test(){
    QCOMPARE(CmToInchCPP().cm_to_inch(2), 0.39);       // 1.00
                                 // 0.79    2.00

    QCOMPARE(CmToInchCPP().cm_to_inch(5), 0.39);//        1.00
                                 // 0.79    2.00
                                 // 1.00    2.54
                                 // 1.18    3.00
                                 // 1.57    4.00
                                 // 1.97    5.00
    QVERIFY_EXCEPTION_THROWN(CmToInchCPP::cm_to_inch(-6), UnderNullExceptionCm);
}

void TestCPPTest::matrix_test(){
<<<<<<< HEAD
    int res[7][5] {
        { 1,  2,  3,  4,  5},
        {20, 21, 22, 23,  6},
        {19, 32, 33, 24,  7},
        {18, 31, 34, 25,  8},
        {17, 30, 35, 26,  9},
        {16, 29, 28, 27, 10},
        {15, 14, 13, 12, 11}
    };
=======
    int res[7][5] {{ 1, 2,   3,  4, 5 },
                  { 20, 21, 22, 23, 6 },
                  { 19, 32, 33, 24, 7 },
                  {  0,  0,  0,  0, 0 },
                  {  0,  0,  0,  0, 0 },
                  {  0,  0,  0,  0, 0 },
                  {  0,  0,  0,  0, 0 },
                  };


    res[0][0] = 1;   res[0][1] = 2;   res[0][2] = 3;   res[0][3] = 4;   res[0][4] = 5;
    res[0][0] = 20;  res[0][1] = 21;  res[0][2] = 22;  res[0][3] = 23;  res[0][4] = 6;
    res[0][0] = 19;  res[0][1] = 32;  res[0][2] = 33;  res[0][3] = 24;  res[0][4] = 7;
    res[0][0] = 18;  res[0][1] = 31;  res[0][2] = 34;  res[0][3] = 25;  res[0][4] = 8;
    res[0][0] = 17;  res[0][1] = 30;  res[0][2] = 35;  res[0][3] = 26;  res[0][4] = 9;
    res[0][0] = 16;  res[0][1] = 29;  res[0][2] = 28;  res[0][3] = 27;  res[0][4] = 10;
    res[0][0] = 15;  res[0][1] = 14;  res[0][2] = 13;  res[0][3] = 12;  res[0][4] = 11;
>>>>>>> 745ff464e96b4d4520f39862ad444ec10491c09c

    MatrixCPP matrix(7, 5);
    for (int i = 0; i < 7; ++i)
    {
        for(int j = 0; j < 5; j++)
        {
            QCOMPARE(matrix.getCell(i, j), res[i][j]);
        }
    }

}

void TestCPPTest::strings_test(){
    string tmpText[5];
    tmpText[0] = "banana banana";
    tmpText[1] = "ban na ba na";
    tmpText[2] = "b an ba na";
    tmpText[3] = "b nab na";
    tmpText[4] = "banana";
    (StringsCPP()).spread_text(tmpText, 5);

    string resText[5];
    resText[0] = "banana banana";
    resText[1] = "ban na ba  na";
    resText[2] = "b  an  ba  na";
    resText[3] = "b   nab    na";
    resText[4] = "       banana";

    for (int i = 0; i < 5; ++i)
    {
        for (int j = 0; j < tmpText[i].length(); j++)
        {
            QCOMPARE(tmpText[i][j], resText[i][j]);
        }
    }
}

QTEST_APPLESS_MAIN(TestCPPTest)


#include "tst_testcpptest.moc"
