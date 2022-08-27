#ifndef BRIDGE_SERVER_H
#define BRIDGE_SERVER_H
#include<assert.h>
#include<error.h>
#include<iostream>
#include<unistd.h>
#include<netinet/ip.h>
#include<arpa/inet.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<mutex>
#include<condition_variable>
#include<pthread.h>
#include<string>
#include<ctime>
#include<cstring>
#include<memory>
#include<algorithm>
#include<queue>
#include<vector>

#include<sqlite3.h>
#include<openssl/ssl.h>
#include"json.hpp"
typedef nlohmann::json json;
class BridgeServer{
private:
    sockaddr_in local_addr;
public:
    void SetAddr(std::string ip, unsigned short port);
};
#endif