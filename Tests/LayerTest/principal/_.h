#pragma once
#include "math/_.h"
#include "nn/_.h"
#include "others/_.h"
#include "tensor/_.h"
namespace Test::Layer
{
    void test_principal()
    {
        Principal::test_math();
        Principal::test_nn();
        Principal::test_others();
        Principal::test_tensor();
    }
}
