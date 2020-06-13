#include<map.hpp>
#include<vector> 
#include<eigen3/Eigen/Dense>
#include<container.hpp>
#include<automi_v1/map.h>
#include<automi_v1/object.h>
#include<std_msgs/Header.h>

namespace huro::Map{
    Map::Map():automi(Bot()){}

    automi_v1::map Map::mapToMsg(const Map& map){
        automi_v1::map msg;
        msg.header = std_msgs::Header();
        Eigen::Vector3d bot_pos = map.botPos();
        msg.bot_pos.x = bot_pos(0);
        msg.bot_pos.y = bot_pos(1);
        msg.bot_pos.z = bot_pos(2);

        for (auto obj: map.objects){
            msg.objects.push_back(Container::objToMsg(obj));
        }

        return msg;
    }

    Map Map::msgToMap(const automi_v1::map& msg){
        Map map;
        for (auto obj: msg.objects){
            map.objects.push_back(Container::msgToObj(obj));
        }

        map.automi.pos_ = Eigen::Vector3d(msg.bot_pos.x, 
                                          msg.bot_pos.y, 
                                          msg.bot_pos.z);
        return map;
    }
    
}


 


