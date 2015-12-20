#include <QString>
#include <QtTest>
#include"bank.h"
#include"home.h"
#include"cm_to_inch.h"
#include"matrix.h"
#include"strings.h"

class TestTest : public QObject
{
    Q_OBJECT

public:
    TestTest();

private Q_SLOTS:
    void testCase1();
    void bank_test();
    void home_test();
    void cm2inch_test();
    void matrix_test();
    void strings_test();
};

TestTest::TestTest()
{
}

void TestTest::testCase1()
{
    QVERIFY2(true, "Failure");
}

void TestTest::bank_test(){
    QCOMPARE(bank(1000, 20), 2488.32f);
}

void TestTest::home_test(){
    QVERIFY2(home(100, 100, 23, 32, 12, 35), "Failure");
}

void TestTest::cm2inch_test(){
    QCOMPARE(cm_to_inch(3), 0.39);//    1.00
                                 // 0.79    2.00
                                 // 1.00    2.54
                                 // 1.18    3.00));
}

void TestTest::matrix_test(){
    int** res = initializeMatrix(2, 3);
    res[0][0] = 1; res[0][1] = 2; res[0][2] = 3;
    res[0][0] = 6; res[0][1] = 5; res[0][2] = 4;

    int** tmp = initializeMatrix(2, 3);
    fillSpiralMatrix(tmp, 2, 3);

    for (int i = 0; i < 2; ++i)
    {
        for(int j = 0; j < 3; j++)
        {
            QCOMPARE(tmp[i][j], res[i][j]);
        }
    }

}

void TestTest::strings_test(){
    char** resText = initialize_text(5, 255);
    resText[0] = "banana banana";
    resText[1] = "ban na ba  na";
    resText[2] = "b  an  ba  na";
    resText[3] = "b   nab    na";
    resText[4] = "       banana";
    char** tmpText = initialize_text(5, 255);
    for (int i = 0; i < 5; ++i)
    {
        for(int j = 0; j < 255; j++)
        {
            QCOMPARE(tmpText[i][j], resText[i][j]);
        }
    }

}

QTEST_APPLESS_MAIN(TestTest)

#include "tst_testtest.moc"
