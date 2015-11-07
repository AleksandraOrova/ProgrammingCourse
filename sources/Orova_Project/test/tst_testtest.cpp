#include <QString>
#include <QtTest>
#include "bank.h"

class TestTest : public QObject
{
    Q_OBJECT

public:
    TestTest();

private Q_SLOTS:
    void testBank();
};

TestTest::TestTest()
{
}

void TestTest::testBank()
{
    QCOMPARE(Bank(1, 2), 1);
  //  QVERIFY2(true, "Failure");
}

QTEST_APPLESS_MAIN(TestTest)

#include "tst_testtest.moc"
