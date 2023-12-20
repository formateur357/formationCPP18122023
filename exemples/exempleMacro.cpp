#define GETTER_SETTER(TYPE, NAME)              \
private:                                       \
    TYPE NAME##_;                              \
                                               \
public:                                        \
    TYPE get##NAME() const { return NAME##_; } \
    void set##NAME(TYPE val) { NAME##_ = val; }

class MyClass
{
    GETTER_SETTER(int, MyVar)
};