// 18 задача 3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
void evenNumbers(long long n,int&ans)
{ 
    int lastNum;
    if (n==0)
    {
        return;
    }
    lastNum = n % 10;
    if (lastNum%2==0)
    {
        ans++;
    } 
    evenNumbers(n / 10, ans);
}
int main()
{
    long long n= 9223372036854775806;
    std::cout << "Col even numbers in number: "<<n<<" :"<<std::endl;
    int ans=0; 
    evenNumbers(n,ans);
    std::cout << ans;
}

