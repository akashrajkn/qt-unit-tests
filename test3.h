#ifndef TEST3_H
#define TEST3_H

#include "AutomatedTests.h"

class Test3 : public QObject
{
    Q_OBJECT

private slots:
    void initTestCase();
    void test1();
    void test2();
    void cleanupTestCase();
};

DECLARE_TEST(Test3)

#endif // TEST3_H

