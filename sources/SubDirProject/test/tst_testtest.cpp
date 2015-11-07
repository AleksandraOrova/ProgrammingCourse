#include <QString>
#include <QtTest>
#include "quadEquation.h"
#include "dateCalc.h"

class TestTest : public QObject {
  Q_OBJECT

public:
  TestTest();

private Q_SLOTS:
  void quadEquation();
  void dateCalc();
  void factorization();
};

TestTest::TestTest() {}

void TestTest::factorization(){

}

void TestTest::dateCalc() {


  struct date date;
  date.month = 11;
  date.days = 21;
  date.hours = 19;
  date.mins = 35;

  struct date date1;
  date1.month = 5;
  date1.days = 13;
  date1.hours = 8;
  date1.mins = 50;

  struct date date2;
  date2.month = 12;
  date2.days = 31;
  date2.hours = 21;
  date2.mins = 43;

  struct date date3;
  date3.month = 2;
  date3.days = 7;
  date3.hours = 22;
  date3.mins = 26;

  struct date res;
  res.month = 12;
  res.days = 2;
  res.hours = 5;
  res.mins = 0;

  struct date res1;
  res1.month = 5;
  res1.days = 18;
  res1.hours = 16;
  res1.mins = 2;

  struct date res2;
  res2.month = 1;
  res2.days = 10;
  res2.hours = 10;
  res2.mins = 31;

  struct date res3;
  res3.month = 3;
  res3.days = 19;
  res3.hours = 22;
  res3.mins = 49;


  QVERIFY2(dateCompare(res,getDate(date, 10, 9, 25)), "Failure");
  QVERIFY2(dateCompare(res1,getDate(date1, 5, 7, 12)), "Failure");
  QVERIFY2(dateCompare(res2,getDate(date2, 9, 12, 48)), "Failure");
  QVERIFY2(dateCompare(res3,getDate(date3, 40, 0, 23)), "Failure");
}

void TestTest::quadEquation() {
  double x1, x2;
  QVERIFY2((2 != quadEquationGetX(3, 5, 10, &x1, &x2)), "Failure");
  QVERIFY2((0 == quadEquationGetX(23, 11, 1, &x1, &x2)), "Failure");
  QVERIFY2((2 == quadEquationGetX(10, 0, 2, &x1, &x2)), "Failure");
  QVERIFY2((0 == quadEquationGetX(131, 152, 0, &x1, &x2)), "Failure");
  QVERIFY2((2 == quadEquationGetX(0, 10, 1, &x1, &x2)), "Failure");
}

QTEST_APPLESS_MAIN(TestTest)

#include "tst_testtest.moc"
