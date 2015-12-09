#include <QString>
#include <QtTest>
#include"bank.h"
#include"home.h"
#include"cm_to_inch.h"

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

QTEST_APPLESS_MAIN(TestTest)

#include "tst_testtest.moc"
