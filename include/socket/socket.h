#ifndef SOCKET_H
#define SOCKET_H
#include<string>
#include<sys/socket.h>
#include<sys/types.h>
#include<netinet/ip.h>
#include<unistd.h>
using namespace std;
enum SocketType{
    Client_Socket = 1,
    Server_Socket,
    Bridge_Socket
}
enum Send_Result_type{
    Success = 1,
    Lose_Connect,
    Failed,
    
}
class Socket{
public:
    int socket;
    sockaddr_in local_addr;
    sockaddr_in aim_addr;
private:
    void Connect(string ip, unsigned short port);

    void DisConnect();
};
#endif