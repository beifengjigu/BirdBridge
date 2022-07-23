#ifndef SERVER_H
#define SERVER_H
#include<string>
using namespace std;
enum SocketType{
    Plain_Socket = 1;
    Security_Socket;
};
typedef struct location_info
{
    SocketType type;
    string ip;
    unsigned short port;

};

class Server{
private:
    
public:
    void Start();
    void Stop();
};
#endif