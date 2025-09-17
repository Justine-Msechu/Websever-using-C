//
//  main.c
//  Websever-using-C
//
//  Created by Justine msechu on 17/09/2025.
//

#include <stdio.h>
#include <unistd.h>


int main() {
    char *header = "HTTP/1.1 200 OK";
    write(1, header, 15);
    return 0;
}
