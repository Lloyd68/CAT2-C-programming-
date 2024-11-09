/*author ;Anyasi Liloyo Munala 
Reg CT101/G/22812/24 */


#include<stdio.h>
#include <string.h>
//structure declaration 
struct employee { char name[25];
    int id;
    char department[20];
    float salary;
    char email[50];
};

int main()
{//assigning values to the structure 
    struct employee e;
    strcpy(e.name, "John Doe");
    e.id=12345;
    strcpy(e.department, "Human Resources");
    e.salary=55000.50;
    strcpy(e.email,"John.doe@company.com");
//printing out values of the structure 
    printf("name:%s\n",e.name );
    printf("id:%d\n", e.id );
    printf("department:%s\n", e.department);
    printf("salary:%f\n", e.salary );
    printf("email:%s\n", e.email);

    return 0;
}