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
    void home_test_1();
    void home_test_2();
    void cm2inch_test();
    void matrix_test();
    void strings_test();
};

TestTest::TestTest(){

}

void TestTest::testCase1(){
    QVERIFY2(true, "Failure");
}

void TestTest::bank_test(){
    QCOMPARE(bank(200, 25), 610.35f);
    QCOMPARE(bank(10, 90), 247.60f);
}

void TestTest::home_test_1(){
    Size s1, s2, s3;
    s1.height = 40;
    s1.width = 70;
    s2.height = 30;
    s2.width = 30;
    s3.height = 30;
    s3.width = 30;
   QVERIFY2(home(s1,s2,s3), "Failure");
}

void TestTest::home_test_2(){
    Size s1, s2, s3;
    s1.height = 80;
    s1.width = 30;
    s2.height = 40;
    s2.width = 50;
    s3.height = 20;
    s3.width = 20;
   QVERIFY2(home(s1,s2,s3), "Failure");
}

void TestTest::cm2inch_test(){
    QCOMPARE(cm_to_inch(2), 0.39);       // 1.00
                                 // 0.79    2.00

    QCOMPARE(cm_to_inch(5), 0.39);//        1.00
                                 // 0.79    2.00
                                 // 1.00    2.54
                                 // 1.18    3.00
                                 // 1.57    4.00
                                 // 1.97    5.00
}

void TestTest::matrix_test(){
    int** res = initializeMatrix(5, 7);
    res[0][0] = 1;   res[0][1] = 2;   res[0][2] = 3;   res[0][3] = 4;   res[0][4] = 5;
    res[0][0] = 20;  res[0][1] = 21;  res[0][2] = 22;  res[0][3] = 23;  res[0][4] = 6;
    res[0][0] = 19;  res[0][1] = 32;  res[0][2] = 33;  res[0][3] = 24;  res[0][4] = 7;
    res[0][0] = 18;  res[0][1] = 31;  res[0][2] = 34;  res[0][3] = 25;  res[0][4] = 8;
    res[0][0] = 17;  res[0][1] = 30;  res[0][2] = 35;  res[0][3] = 26;  res[0][4] = 9;
    res[0][0] = 16;  res[0][1] = 29;  res[0][2] = 28;  res[0][3] = 27;  res[0][4] = 10;
    res[0][0] = 15;  res[0][1] = 14;  res[0][2] = 13;  res[0][3] = 12;  res[0][4] = 11;

    int** tmp = initializeMatrix(2, 3);
    fillSpiralMatrix(tmp, 5, 7);

    for (int i = 0; i < 5; ++i)
    {
        for(int j = 0; j < 7; j++)
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
