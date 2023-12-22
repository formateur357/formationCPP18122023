class MonException : public exception
{
private:
    string cause;

public:
    MonException(string c) noexcept : cause(c) {}
    ~MonException() noexcept {}
    const char *what() const noexcept override { return cause.c_str(); }
};
