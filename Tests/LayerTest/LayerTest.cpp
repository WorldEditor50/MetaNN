#include "./composite/_.h"
#include "./principal/_.h"
#include "./recurrent/_.h"
#include "LayerTest.h"

int LayerTest()
{
    Test::Layer::test_composite();
    Test::Layer::test_principal();
    Test::Layer::test_recurrent();
    return 0;
}
