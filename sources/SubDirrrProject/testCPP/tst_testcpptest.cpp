#include <QString>
#include <QtTest>
#include <bankcpp.h>
#include <rectangle.h>
#include <cmtoinchcpp.h>
#include <matrixcpp.h>
#include <stringscpp.h>
class TestCPPTest : public QObject
{
    Q_OBJECT

public:
    TestCPPTest();

private Q_SLOTS:
    void testCase1();
    void bank_test();
    void home_test_1();
    void home_test_2();
    void cm2inch_test();
    void matrix_test();
    void strings_test();
};

TestCPPTest::TestCPPTest(){

}

void TestCPPTest::bank_test(){
    QCOMPARE(BankCPP().compoundInterest(200, 25), 610.35f);
    QCOMPARE(BankCPP().compoundInterest(10, 90), 247.60f);
    //QVERIFY_EXCEPTION_THROWN(BankCPP.compoundInterest(200, -3), "<0");
}

void TestCPPTest::home_test_1(){
    Rectangle area(40,70);
    Rectangle rect1(30,30);
    Rectangle rect2(30,30);
   QVERIFY2(area.canInsert(rect1, rect2), "Failure");
}

void TestCPPTest::home_test_2(){
    Rectangle area(80,30);
    Rectangle rect1(40,50);
    Rectangle rect2(20,20);
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
}

void TestCPPTest::matrix_test(){
    int res[7][5] {
        { 1,  2,  3,  4,  5},
        {20, 21, 22, 23,  6},
        {19, 32, 33, 24,  7},
        {18, 31, 34, 25,  8},
        {17, 30, 35, 26,  9},
        {16, 29, 28, 27, 10},
        {15, 14, 13, 12, 11}
    };

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
        for(int j = 0; j < tmpText[i].length(); j++)
        {
            QCOMPARE(tmpText[i][j], resText[i][j]);
        }
    }
}

QTEST_APPLESS_MAIN(TestCPPTest)

#include "tst_testcpptest.moc"
