#include"master.h"
class device1:public master{
int16_t s_id;
int16_t m_data;
int16_t r_id;
public:
    device1(int16_t sid,int16_t data,int16_t rid):s_id(sid),m_data(data),r_id(rid)
    void send();
    void receive();
    void processing();

};
