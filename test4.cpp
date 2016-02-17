#include "test4.h"

void Test4::initTestCase()
{

}

void Test4::testGui()
{
    QLineEdit lineEdit;

    QTest::keyClicks(&lineEdit, "hello world");

    QCOMPARE(lineEdit.text(), QString("hello world"));
}

void Test4::cleanupTestCase()
{

}
