#include <QString>
#include <QtTest>

class TestTest : public QObject
{
    Q_OBJECT

public:
    TestTest();

private Q_SLOTS:
    /*oid bank_test();
    void home_test();
    void cm2inch_test();
    void matrix_test();
    void strings_test();*/
};

TestTest::TestTest()
{
}

/*void TestTest::bank_test()
{
    QCOMPARE(bank(1000, 20), 2488.320557);
    QVERIFY2(true, "Failure");
}

void TestTest::home_test()
{
    QCOMPARE(home(100, 100, 23, 32, 12, 35), Yes);
    QVERIFY2(true, "Failure");
}

void TestTest::cm2inch_test()
{
   QCOMPARE(cm_to inch(3), 0.39    1.00
                            0.79    2.00
                           1.00    2.54
                            1.18    3.00);
    QVERIFY2(true, "Failure");
}

void TestTest::matrix_test()
{
    QCOMPARE(matrix(1000, 20), 2488.320557);
    QVERIFY2(true, "Failure");
}

void TestTest::strings_test()
{
    QCOMPARE(bank(1000, 20), 2488.320557);
    QVERIFY2(true, "Failure");
}*/
QTEST_APPLESS_MAIN(TestTest)

#include "tst_testtest.moc"
