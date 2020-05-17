#include <iostream>
#include "Sales_item.h"

int main() {
    Sales_item total;

    if (std::cin >> total) { // 读取第一条记录
        Sales_item trans;
        while (std::cin >> trans) {
            if (total.isbn() == trans.isbn()) {
                total += trans; // 更新销售总额
            } else {
                // 打印前一本书的结果
                std::cout << total << std::endl;
                total = trans; // total 表示下一本书的销售额
            }
        }
        std::cout << total << std::endl; // 输出最后一本书的结果
    } else {
        // 没有输入
        std::cerr << "No data?!" << std::endl;
        return -1;
    }
    return 0;
}
