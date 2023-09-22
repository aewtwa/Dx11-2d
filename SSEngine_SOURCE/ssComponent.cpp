#include "ssComponent.h"


namespace ss
{
    Component::Component(COMPONENTTYPE type)
        : mType(type)
        , mOwner(nullptr)
    {
    }

    Component::~Component()
    {
    }
}