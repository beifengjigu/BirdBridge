#include "server.h"

int main(int argv, char *argc[]) {
    BridgeServer server;
    server.SetAddr("127.0.0.1", 1234);
    return 0;
}