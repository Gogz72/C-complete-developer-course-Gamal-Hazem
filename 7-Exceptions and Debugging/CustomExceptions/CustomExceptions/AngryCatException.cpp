#include "AngryCatException.h"

using namespace std;

Angry_cat_exception::Angry_cat_exception():runtime_error("kitty is angry")
{
}

Angry_cat_exception::Angry_cat_exception(const string& state) :runtime_error(state)
{
}