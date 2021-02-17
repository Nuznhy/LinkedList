#include <iostream>
#include "LinkedList.h"


int data_type_check() {
    int a;
    std::cin >> a;
    if (a == 0) {
        std::cerr << "Wrong input!\n";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        data_type_check();
    }
    else {
        return a;
    }
}

int main() {
    LinkedList list;
    bool bool_switch = true;
    int int_switch;
    int index;
    std::cout << "\tWelcome To Linked list" << std::endl;
    while (bool_switch) {
        std::cout << "\tChoose what to do?" << std::endl;
        std::cout << "\t1. Add Node" << std::endl;
        std::cout << "\t2. Delete Node" << std::endl;
        std::cout << "\t3. Print List" << std::endl;
        std::cout << "\t4. Write to txt" << std::endl;
        std::cout << "\t5. Calculate Same" << std::endl;
        std::cout << "\t6. Add After Index" << std::endl;
        std::cout << "\t7. Swap k and j" << std::endl;
        std::cout << "\t8. Exit" << std::endl;
        int_switch = data_type_check();

        switch (int_switch) {
        case 1: {
            std::cout << "enter data" << std::endl;
            list.add_node();
            break;
        }
        case 2: {
            std::cout << "Enter Index" << std::endl;
            index = data_type_check();
            list.delete_node(index);
            break;
        }
        case 3: {
            list.print_list();
            break;
        }
        case 4: {
            list.write();
            break;
        }
        case 5: {
            list.calc_same();
            break;
            
        }
        case 6:{
            std::cout << "Enter Index" << std::endl;
            index = data_type_check();
            list.add_after_index(index);
            break;
        }
        case 7: {
            int index_k, index_j;
            std::cout << "Enter Index k" << std::endl;
            index_k = data_type_check();
            std::cout << "Enter Index j" << std::endl;
            index_j = data_type_check();
            list.swap(index_k, index_j);
            break;
        }
        case 8: {
            bool_switch = false;
            break;
        }
        default: {
            std::cerr << "Inrorect" << std::endl;
            break;
        }
        }
    }
}
