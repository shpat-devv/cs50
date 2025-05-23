#include <stdio.h>

void main(){ //void can only be used for function returns, pointers and params, its the absence of a value

    int number = 0;         //range: -2,147,483,648 to 2,147,483,647, 
                            //size: 4 bytes or 32 bits
    float dec = 10.2;       //range 1.2E-38 to 3.4E+38
                            //size: 4 bytes
    char word = 'C';        //range (-128 to 127) or (0 to 255)
                            //size: 1byte 
    double db = 1.2938;     //range 1.7E-308 to 1.7E+308
                            //size: 8bytes

    printf("size int: %lu", // the size of data types is dependent on the architecture
        sizeof(int));


/*
| Data Type               | Size (bytes) | Range                                      | Format Specifier |
|-------------------------|--------------|--------------------------------------------|------------------|
| short int               | 2            | -32,768 to 32,767                          | %hd              |
| unsigned short int      | 2            | 0 to 65,535                                | %hu              |
| unsigned int            | 4            | 0 to 4,294,967,295                         | %u               |
| int                     | 4            | -2,147,483,648 to 2,147,483,647            | %d               |
| long int                | 4            | -2,147,483,648 to 2,147,483,647            | %ld              |
| unsigned long int       | 4            | 0 to 4,294,967,295                         | %lu              |
| long long int           | 8            | -(2^63) to (2^63)-1                        | %lld             |
| unsigned long long int  | 8            | 0 to 18,446,744,073,709,551,615            | %llu             |
| signed char             | 1            | -128 to 127                                | %c               |
| unsigned char           | 1            | 0 to 255                                   | %c               |
| float                   | 4            | 1.2E-38 to 3.4E+38                         | %f               |
| double                  | 8            | 1.7E-308 to 1.7E+308                       | %lf              |
| long double             | 16           | 3.4E-4932 to 1.1E+4932                     | %Lf              |
*/
}