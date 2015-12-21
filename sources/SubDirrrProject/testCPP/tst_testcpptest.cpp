#include <QString>
#include <QtTest>

class TestCPPTest : public QObject
{
    Q_OBJECT

public:
    TestCPPTest();

private Q_SLOTS:
    void testCase1();
  // void bank_test();
  // void home_test_1();
  // void home_test_2();
  // void cm2inch_test();
  // void matrix_test();
  // void strings_test();
};

TestCPPTest::TestCPPTest(){

}

void TestCPPTest::testCase1(){
    QVERIFY2(true, "Failure");
}

QTEST_APPLESS_MAIN(TestCPPTest)

#include "tst_testcpptest.moc"
