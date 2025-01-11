int main()
{
    void foo(),f();
    f();
}
void foo()
{
    printf("2");
}
void f()
{
    printf("1");
    foo();
}
