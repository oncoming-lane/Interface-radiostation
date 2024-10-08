#include "TxRx.h"

int main() 
{
    while (1) 
    {
        unsigned char buffer[BUFFER_SIZE];  // Выделение памяти для буфера
        memset(buffer, 0, BUFFER_SIZE);

        Rx(buffer);     // Считываем данные с Ethernet порта и записываем их в файл
        TxEth(buffer);  // Отправляем данные из файла на радиостанцию
    }

    return 0;
}