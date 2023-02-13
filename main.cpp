#include <iostream>
#include <cstdarg>
//可变参数的函数
void vair_fun(int count, ...)
{
    va_list args;
    va_start(args, count);
    for (int i = 0; i < count; ++i)
    {
        auto arg = va_arg(args, decltype(args));
        std::cout << arg << " ";
    }
    va_end(args);
}
int main()
{
    //可变参数有 4 个，分别为 10、20、30、40
    vair_fun(4, 10, 20, 30,40);
    qwe�� 
    return 0;
}
