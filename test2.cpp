#include "test2.h"

void Test2::initTestCase()
{
}

void Test2::test1()
{
    QCOMPARE(42, 40 + 2);

    //qDebug() << "42 ==42";

}

void Test2::test2()
{
    QCOMPARE("Hello", "World!");

    //qDebug() << "hello world is not equal";
}

void Test2::cleanupTestCase()
{
}
