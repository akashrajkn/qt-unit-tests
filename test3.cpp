#include "test3.h"

void Test3::initTestCase()
{
}

void Test3::test1()
{
    QCOMPARE(42, 40 + 2);

}

void Test3::test2()
{
    QString str = "Hello World";
    QVERIFY(str.toUpper() == "HELLO WORLD");

    qDebug() << "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
}

void Test3::cleanupTestCase()
{
}

