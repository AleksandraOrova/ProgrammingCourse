#include <QString>
#include <QtTest>

class TestCPPTest : public QObject
{
    Q_OBJECT

public:
    TestCPPTest();

private Q_SLOTS:
    void testCase1();
};

TestCPPTest::TestCPPTest()
{
}

void TestCPPTest::testCase1()
{
    QVERIFY2(true, "Failure");
}

QTEST_APPLESS_MAIN(TestCPPTest)

#include "tst_testcpptest.moc"
