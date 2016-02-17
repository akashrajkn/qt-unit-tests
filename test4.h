#ifndef TEST4_H
#define TEST4_H

#include "AutomatedTests.h"

class Test4: public QObject
{
    Q_OBJECT

private slots:
    void initTestCase();
    void testGui();
    void cleanupTestCase();
};


DECLARE_TEST(Test4)

#endif // TEST4_H

