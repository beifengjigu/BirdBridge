#include "server.h"
void BridgeServer::SetAddr(std::string ip, unsigned short port) {
    std::memset(&local_addr, 0 ,sizeof(sockaddr_in));
    inet_aton(ip.c_str(), &local_addr.sin_addr);
    local_addr.sin_port = htons(port);
    local_addr.sin_family = AF_INET;
}