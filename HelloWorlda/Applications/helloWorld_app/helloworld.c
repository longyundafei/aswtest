/////////////////////////////////////////////////////////////////////////////////////////////
// Copyright 2010 GE Aviation Systems LLC, U.S.A.
// -------------------------------------------------------------------------------------------------
//                       GE AVIATION SYSTEMS LLC PROPRIETARY INFORMATION
// The information contained in this document is GE Aviation Systems LLC proprietary information 
// and is disclosed in confidence.  It is the property of GE Aviation Systems LLC and shall not 
// be used, disclosed to others or reproduced without the express written consent of GE Aviation 
// Systems LLC, including, but without limitation, it is not to be used in the creation, 
// manufacture, development, or derivation of any repairs, modifications, spare parts, designs, or 
// configuration changes or to obtain FAA or any other government or regulatory approval to do so. 
// If consent is given for reproduction in whole or in part, this notice and the notice set forth 
// on each page of this document shall appear in any such reproduction in whole or in part. 
// 
// This technical data is considered ITAR and/or EAR controlled pursuant to 22 CFR Part 120-130 
// and 15 CFR Parts 730-774 respectively.  Transfer of this data by any means to a Non-US 
// person, whether in the United States or abroad, without the proper U.S. Government 
// authorization (e.g.,License, exemption, NLR, etc.) is strictly prohibited. 
////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <pthread.h>

/////////////////////////////////////////////////////////////////////////////////////////////
// helloworld_main
//

#define PORT 8080
#define BUF_SIZE 1024

void *recv_thread(void *arg)
{
    int sockfd = *(int *)arg;
    struct sockaddr_in addr;
    char buf[BUF_SIZE];
    socklen_t addrlen = sizeof(addr);

    while (1) {
        int n = recvfrom(sockfd, buf, BUF_SIZE, 0,
                         (struct sockaddr *)&addr, &addrlen);
        if (n < 0) {
            perror("recvfrom error");
            exit(1);
        }
        buf[n] = '\0';
        printf("recvfrom %s:%d %d bytes: %s\n",
               inet_ntoa(addr.sin_addr), ntohs(addr.sin_port), n, buf);
    }
}

int sockfd;
int server() {
//    int sockfd;
    struct sockaddr_in servaddr, cliaddr;
//    char buffer[1024];
//    int n;
//    socklen_t addrlen;

    if ((sockfd = socket(AF_INET, SOCK_DGRAM, 0)) < 0) {
        perror("socket creation failed");
        exit(EXIT_FAILURE);
    }

    memset(&servaddr, 0, sizeof(servaddr));
    memset(&cliaddr, 0, sizeof(cliaddr));

    servaddr.sin_family = AF_INET;
    servaddr.sin_addr.s_addr = INADDR_ANY;
    servaddr.sin_port = htons(PORT);

    if (bind(sockfd, (const struct sockaddr *)&servaddr, sizeof(servaddr)) < 0) {
        perror("bind failed");
        exit(EXIT_FAILURE);
    }
    pthread_t tid;
    if (pthread_create(&tid, NULL, recv_thread, &sockfd) != 0) {
        perror("pthread_create error");
        exit(1);
    }

//    printf("Server listening on port %d\n", PORT);

//    while (1) {
//        addrlen = sizeof(cliaddr);
//        n = recvfrom(sockfd, (char *)buffer, sizeof(buffer), 0, (struct sockaddr *)&cliaddr, &addrlen);
//        buffer[n] = '\0';
//        printf("Client : %s\n", buffer);
//        sendto(sockfd, (const char *)buffer, strlen(buffer), 0, (const struct sockaddr *)&cliaddr, addrlen);
//    }


    return 0;
}

extern void printhello(void);
extern int start_hello(void);
void helloworld_main( void )
{

	printhello();
	printf("Hello World\n");
	server();
	start_hello();
    close(sockfd);
    return;
}

