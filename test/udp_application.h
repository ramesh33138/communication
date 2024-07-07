#include<iostream.h>

class UdpApplication {
	int socketId;
	int sock;
	public:
		UdpApplication();
		void Init();
		int start();
		int stop();
		~UdpApplication();
};
